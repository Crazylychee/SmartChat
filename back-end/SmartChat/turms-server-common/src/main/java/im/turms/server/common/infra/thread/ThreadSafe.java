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

package im.turms.server.common.infra.thread;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * @author James Chen
 */

/**
 * @Documented:
 *
 * 这个元注解表示该注解应该包含在 Java 文档中。这意味着当这个注解被应用到一个类或接口时，它会在生成的 Java 文档中显示。
 *
 * @Target(ElementType.TYPE):
 *
 * 这个元注解指定了该注解可以应用的目标类型。ElementType.TYPE 表示该注解可以应用于类、接口（包括注解类型）或枚举。
 *
 * @Retention(RetentionPolicy.CLASS):
 *
 * 这个元注解指定了该注解的保留策略。RetentionPolicy.CLASS 表示该注解在编译时会被保留在类文件中，但在运行时不会被 JVM 保留。这意味着该注解在编译时是可见的，但在运行时无法通过反射获取。
 */

/**
 * @ThreadSafe 注解是一个自定义注解，用于标记类或接口是线程安全的。它通过 @Documented、@Target 和 @Retention 元注解来定义其行为和可见性。这个注解可以帮助开发者和工具更好地理解和处理并发代码。
 */
@Documented
@Target(ElementType.TYPE)
@Retention(RetentionPolicy.CLASS)
public @interface ThreadSafe {
}
