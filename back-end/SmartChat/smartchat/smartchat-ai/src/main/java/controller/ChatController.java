package controller;

import jakarta.annotation.Resource;
import org.springframework.ai.chat.model.ChatResponse;
import org.springframework.ai.chat.prompt.Prompt;
import org.springframework.ai.openai.OpenAiChatModel;
import org.springframework.ai.openai.OpenAiChatOptions;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
import reactor.core.publisher.Flux;

@RestController
public class ChatController {

    /**
     * spring-ai 自动装配的，可以直接注入使用
     */
    @Resource
    private OpenAiChatModel openAiChatClient;

    /**
     * 调用OpenAI的接口
     *
     * @param msg 我们提的问题
     * @return
     */
    @RequestMapping(value = "/ai/chat")
    public String chat(@RequestParam(value = "msg") String msg) {
        String called = openAiChatClient.call(msg);

        return called;
    }

    /**
     * 调用OpenAI的接口
     *
     * @param msg 我们提的问题
     * @return
     */
    @RequestMapping(value = "/ai/chat2")
    public Object chat2(@RequestParam(value = "msg") String msg) {
        ChatResponse chatResponse = openAiChatClient.call(new Prompt(msg));
        return chatResponse.getResult().getOutput().getContent();
    }

    /**
     * 调用OpenAI的接口
     *
     * @param msg 我们提的问题
     * @return
     */
    @RequestMapping(value = "/ai/chat3")
    public Object chat3(@RequestParam(value = "msg") String msg) {
        //可选参数在配置文件中配置了，在代码中也配置了，那么以代码的配置为准，也就是代码的配置会覆盖掉配置文件中的配置
        ChatResponse chatResponse = openAiChatClient.call(new Prompt(msg, OpenAiChatOptions.builder()
                //.withModel("gpt-4-32k") //gpt的版本，32k是参数量
                .withTemperature(0.4) //温度越高，回答得比较有创新性，但是准确率会下降，温度越低，回答的准确率会更好
                .build()));
        return chatResponse.getResult().getOutput().getContent();
    }

    /**
     * 调用OpenAI的接口
     *
     * @param msg 我们提的问题
     * @return
     */
    @RequestMapping(value = "/ai/chat4")
    public Object chat4(@RequestParam(value = "msg") String msg) {
        //可选参数在配置文件中配置了，在代码中也配置了，那么以代码的配置为准，也就是代码的配置会覆盖掉配置文件中的配置
        Flux<ChatResponse> flux = openAiChatClient.stream(new Prompt(msg, OpenAiChatOptions.builder()
                //.withModel("gpt-4-32k") //gpt的版本，32k是参数量
                .withTemperature(0.4) //温度越高，回答得比较有创新性，但是准确率会下降，温度越低，回答的准确率会更好
                .build()));

        flux.toStream().forEach(chatResponse -> {
            System.out.println(chatResponse.getResult().getOutput().getContent());
        });
        return flux.collectList(); //数据的序列，一序列的数据，一个一个的数据返回
    }

}
