import com.smartchat.auth.SmartChatAuthApplication;
import com.smartchat.framework.designpattern.singleton.Singleton;
import org.junit.jupiter.api.Test;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.core.io.ClassPathResource;
import org.springframework.scripting.support.ResourceScriptSource;
import org.springframework.test.context.ContextConfiguration;

@ContextConfiguration(classes = {SmartChatAuthApplication.class})
@SpringBootTest
public class SingleTonTests {

    private static final String EMAIL_TEMPLATE = "template/email_template.txt";

    @Test
    public void test() {
        String htmlcontent = Singleton.get(EMAIL_TEMPLATE,()->{
            String content = String.valueOf(new ResourceScriptSource(new ClassPathResource(EMAIL_TEMPLATE)));
            return content;
        });


        System.out.println(htmlcontent);
    }
}
