package self.live.controller;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.*;
import self.live.service.SignTransferExtService;
import self.live.utils.Assert;
import self.live.utils.OvercoatSseExceptionUtil;

/**
 * 信令交互额外的控制器
 *
 * @Author xxj
 * @Date 2023/8/10 8:52
 * @Version 1.0
 */
@RestController
@RequestMapping("/sign-transfer-ext")
public class SignTransferExtController {
    private static final Logger log = LoggerFactory.getLogger(SignTransferExtController.class);
    private final SignTransferExtService signTransferExtService;

    public SignTransferExtController(SignTransferExtService signTransferExtService) {
        this.signTransferExtService = signTransferExtService;
    }

    /**
     * 获取新的offer
     *
     * @param roomName
     * @param id
     * @return
     */
    @GetMapping(value = "/get-new-offer", produces = "text/event-stream;charset=UTF-8")
    public String getNewOffer(@RequestParam("roomName") String roomName, @RequestParam("id") String id) {
        return OvercoatSseExceptionUtil.handleException(() -> {
            Assert.isNotBlank(roomName, "房间名称");
            Assert.isNotBlank(id, "接收者");

            log.info("房间名称"+roomName);
            log.info("接收者"+id);

            return signTransferExtService.getNewOffer(roomName, id);
        });
    }

    /**
     * 获取新的answer
     *
     * @param roomName
     * @param id
     * @return
     */
    @GetMapping(value = "/get-new-answer", produces = "text/event-stream;charset=UTF-8")
    public String getNewAnswer(@RequestParam("roomName") String roomName, @RequestParam("id") String id) {
        return OvercoatSseExceptionUtil.handleException(() -> {
            Assert.isNotBlank(roomName, "房间号");
            Assert.isNotBlank(id, "接收者");

            log.info("房间号"+roomName);
            log.info("接收者"+id);

            return signTransferExtService.getNewAnswer(roomName, id);
        });
    }
}
