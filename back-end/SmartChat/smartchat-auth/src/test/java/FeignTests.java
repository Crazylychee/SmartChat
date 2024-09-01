//import com.alibaba.fastjson2.JSON;
//import com.smartchat.auth.SmartChatAuthApplication;
//import com.smartchat.auth.domain.dto.UserDTO;
//import com.smartchat.auth.request.FeignUserService;
//import com.smartchat.auth.request.User;
//import org.junit.jupiter.api.Test;
//import org.springframework.beans.factory.annotation.Autowired;
//import org.springframework.boot.test.context.SpringBootTest;
//import org.springframework.test.context.ContextConfiguration;
//
//import java.time.LocalDate;
//
//import static com.smartchat.auth.request.ProfileAccessStrategy.ALL;
//
//@ContextConfiguration(classes = {SmartChatAuthApplication.class})
//@SpringBootTest
//public class FeignTests {
//
//    @Autowired
//    private FeignUserService feignUserService;
//
//
//    @Test
//    public void testSaveUser() {
//        User user = new User(
//                null,
//                "root",
//                "商县思",
//                "in",
//                "http://dummyimage.com/400x400",
//                ALL,
//                50,
//                null,
//                false
//        );
//
//        String userStr = JSON.toJSONString(user);
//        feignUserService.saveUser(userStr);
//    }
//
//}
