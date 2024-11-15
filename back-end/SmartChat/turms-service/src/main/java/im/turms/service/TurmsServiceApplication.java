/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.service;

import org.springframework.boot.autoconfigure.SpringBootApplication;

import im.turms.server.common.BaseTurmsApplication;
import im.turms.server.common.infra.application.Application;
import im.turms.server.common.infra.cluster.node.NodeType;
import im.turms.server.common.infra.lang.PackageConst;

import java.util.Arrays;

/**
 * @author James Chen
 */
@Application(nodeType = NodeType.SERVICE)
@SpringBootApplication(
        scanBasePackages = {PackageConst.SERVICE, PackageConst.SERVER_COMMON},
        proxyBeanMethods = false)
public class TurmsServiceApplication extends BaseTurmsApplication {

    public static void main(String[] args) {
        System.out.println(Arrays.toString(args));
        bootstrap(TurmsServiceApplication.class, args);
    }

}
