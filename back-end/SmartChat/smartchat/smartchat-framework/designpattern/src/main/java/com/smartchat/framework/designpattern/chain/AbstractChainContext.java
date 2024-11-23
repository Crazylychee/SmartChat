package com.smartchat.framework.designpattern.chain;

import com.smartchat.framework.starter.base.ApplicationContextHolder;
import org.springframework.boot.CommandLineRunner;
import org.springframework.core.Ordered;
import org.springframework.util.CollectionUtils;

import java.util.*;


public class AbstractChainContext<T> implements CommandLineRunner {



    private final Map<String, List<AbstractChainHandler>> abstractChainHandlerContainer = new HashMap<>();


    /**
     * 责任链组件执行
     *
     * @param mark         责任链组件标识
     * @param requestParam 请求参数
     */
    public void handler(String mark, T requestParam) {
        //从ioc容器中获取所有的责任链组件
        List<AbstractChainHandler> abstractChainHandlers = abstractChainHandlerContainer.get(mark);
        if (CollectionUtils.isEmpty(abstractChainHandlers)) {
            throw new RuntimeException(String.format("[%s] Chain of Responsibility ID is undefined.", mark));
        }
        abstractChainHandlers.forEach(each -> each.handler(requestParam));
    }


    @Override
    public void run(String... args) {
        // 从 Spring IOC 容器中获取责任链组件
        Map<String, AbstractChainHandler> chainFilterMap = ApplicationContextHolder.getBeansOfType(AbstractChainHandler.class);
        chainFilterMap.forEach((beanName, bean) -> {
            //判断Mark是否存在于责任链组件中，存在就向集合新增，不存在就创建Mark和对应的集合
            List<AbstractChainHandler> abstractChainHandlers = abstractChainHandlerContainer.getOrDefault(bean.mark(), new ArrayList<>());
            abstractChainHandlers.add(bean);
            abstractChainHandlerContainer.put(bean.mark(), abstractChainHandlers);
        });
        abstractChainHandlerContainer.forEach((mark, unsortedChainHandlers) -> {
            // 对每个 Mark 对应的责任链实现类集合进行排序，优先级小的在前
            unsortedChainHandlers.sort(Comparator.comparing(Ordered::getOrder));
        });

    }

}
