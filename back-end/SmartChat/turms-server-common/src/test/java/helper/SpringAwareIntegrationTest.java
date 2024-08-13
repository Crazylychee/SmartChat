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

package helper;

import org.springframework.test.context.ContextConfiguration;

import im.turms.server.common.access.admin.web.HttpRequestDispatcher;
import im.turms.server.common.testing.BaseSpringAwareIntegrationTest;

/**
 * @author James Chen
 */
@ContextConfiguration(classes = {TurmsMockApplication.class, TestEnvironmentConfig.class})
public abstract class SpringAwareIntegrationTest extends BaseSpringAwareIntegrationTest {

    @Override
    protected int getAdminApiHttpServerPort() {
        return context.getBean(HttpRequestDispatcher.class)
                .port();
    }

}