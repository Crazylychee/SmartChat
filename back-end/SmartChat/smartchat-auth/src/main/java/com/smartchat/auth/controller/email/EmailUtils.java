package com.smartchat.auth.controller.email;

import jakarta.mail.internet.MimeMessage;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.mail.SimpleMailMessage;
import org.springframework.mail.javamail.JavaMailSender;
import org.springframework.mail.javamail.MimeMessageHelper;
import org.springframework.scheduling.annotation.Async;
import org.springframework.stereotype.Component;


@Component
public class EmailUtils {

    @Value("${spring.mail.username}")
    private String from;

    @Autowired
    private JavaMailSender mailSender;

    /**
     * 发送简单文本邮件
     *
     * @param to      收件人地址
     * @param subject 邮件主题
     * @param text    邮件内容
     */
    @Async
    public void sendSimpleEmail(String to, String subject, String text) {
        SimpleMailMessage message = new SimpleMailMessage();
        message.setTo(to);
        message.setFrom(from);
        message.setSubject(subject);
        message.setText(text);
        mailSender.send(message);
    }

    /**
     * 发送带有html内容的邮件
     *
     */
    @Async
    public void sendHtmlEmail(String to, String subject, String text) throws jakarta.mail.MessagingException {
        MimeMessage message = mailSender.createMimeMessage();
        MimeMessageHelper helper = new MimeMessageHelper(message, true);
        message.setFrom(from);
        helper.setTo(to);
        helper.setSubject(subject);
        helper.setText(text, true);

        mailSender.send(message);
    }

    /**
     * 发送带有附件的邮件
     *
     * @param to       收件人地址
     * @param subject  邮件主题
     * @param text     邮件内容
     * @throws jakarta.mail.MessagingException 如果发送邮件过程中发生错误
     */
    public void sendEmailWithAttachment(String to, String subject, String text) throws  jakarta.mail.MessagingException {
        MimeMessage message = mailSender.createMimeMessage();
        MimeMessageHelper helper = new MimeMessageHelper(message, true);

        helper.setTo(to);
        helper.setSubject(subject);
        helper.setText(text);


        mailSender.send(message);
    }


}
