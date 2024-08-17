# 使用官方的 OpenJDK 8 镜像作为基础镜像
FROM openjdk:8-jre-slim

# 设置工作目录
WORKDIR /app

# 将打包好的 Spring Boot JAR 文件复制到镜像中
COPY target/webrtc-demo.jar /app/webrtc-demo.jar

# 暴露应用程序的端口
EXPOSE 9000

# 启动应用程序
CMD ["java", "-jar", "webrtc-demo.jar"]
