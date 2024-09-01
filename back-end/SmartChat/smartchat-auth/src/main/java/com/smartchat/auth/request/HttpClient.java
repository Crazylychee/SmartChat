package com.smartchat.auth.request;

import org.apache.http.client.methods.CloseableHttpResponse;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.entity.StringEntity;
import org.apache.http.impl.client.CloseableHttpClient;
import org.apache.http.impl.client.HttpClients;
import org.apache.http.util.EntityUtils;
import org.springframework.stereotype.Component;

import java.io.IOException;

@Component
public class HttpClient {

//    public static void main(String[] args) {
//        String url = "https://api.example.com/data";
//        String responseBody = sendGetRequest(url);
//        System.out.println("Response: " + responseBody);
//    }

    public String sendGetRequest(String url) {
        try (CloseableHttpClient httpClient = HttpClients.createDefault()) {
            HttpGet request = new HttpGet(url);

            try (CloseableHttpResponse response = httpClient.execute(request)) {
                // 获取响应状态码
                int statusCode = response.getStatusLine().getStatusCode();
                System.out.println("Status Code: " + statusCode);

                // 获取响应内容
                return EntityUtils.toString(response.getEntity());
            }
        } catch (IOException e) {
            throw new RuntimeException("Failed to send HTTP GET request", e);
        }
    }

    public String sendPostRequest(String url, String requestBody) {
        try (CloseableHttpClient httpClient = HttpClients.createDefault()) {
            HttpPost request = new HttpPost(url);
            request.setEntity(new StringEntity(requestBody));
            request.setHeader("Content-Type", "application/json");
            request.setHeader(Constants.REQUEST_HEADER_NAME, Constants.REQUEST_HEADER);
            try (CloseableHttpResponse response = httpClient.execute(request)) {
                // 获取响应状态码
                int statusCode = response.getStatusLine().getStatusCode();
                System.out.println("Status Code: " + statusCode);

                // 获取响应内容
                return EntityUtils.toString(response.getEntity());
            }
        } catch (IOException e) {
            throw new RuntimeException("Failed to send HTTP POST request", e);
        }
    }
}
