import { MessageBoxControl } from "../components/MessageBoxControl.js";
import StringUtil from "./StringUtil.js";
export default class OutputStreamUtil {
    static getUserMedia(callBackFun) {
        if (!StringUtil.chkObjNull(this.userMediaStream)) {
            callBackFun(this.userMediaStream);
            return;
        }
        navigator.mediaDevices.getUserMedia({
            audio: true,
            video: true
        }).then(stream => {
            this.userMediaStream = stream;
            callBackFun(stream);
            stream.getTracks().forEach(track => {
                track.onended = () => {
                    MessageBoxControl.open("权限关闭，将退出！", () => window.location.reload());
                };
            });
        }).catch(() => {
            // MessageBoxControl.open("未获得权限，无法进行视频聊天！", () => window.location.reload());
            // 如果获取权限失败，使用默认的媒体流或者模拟的媒体流
            const defaultStream = this.createDefaultMediaStream();
            this.userMediaStream = defaultStream;
            callBackFun(defaultStream);
            MessageBoxControl.open("未获得权限，将使用默认视频聊天！");
        });
    }
    static getDisplayMedia(callBackFun, errorCallBackFun) {
        if (!StringUtil.chkObjNull(this.displayMediaStream)) {
            callBackFun(this.displayMediaStream);
            return;
        }
        navigator.mediaDevices.getDisplayMedia({
            audio: true,
            video: true
        }).then(stream => {
            this.displayMediaStream = stream;
            stream.getVideoTracks()[0].onended = () => {
                errorCallBackFun();
                this.displayMediaStream = null;
            };
            callBackFun(stream);
        }).catch(() => {
            MessageBoxControl.open("未获得权限，无法进行屏幕共享！", () => {
                errorCallBackFun();
            });
        });
    }

    static createDefaultMediaStream() {
        // 创建一个模拟的媒体流
        const audioContext = new AudioContext();
        const oscillator = audioContext.createOscillator();
        const dst = oscillator.connect(audioContext.createMediaStreamDestination());
        oscillator.start();
        const audioStream = dst.stream;

        const canvas = document.createElement('canvas');
        canvas.width = 640;
        canvas.height = 480;
        const ctx = canvas.getContext('2d');
        ctx.fillStyle = 'black';
        ctx.fillRect(0, 0, canvas.width, canvas.height);
        ctx.font = '30px Arial';
        ctx.fillStyle = 'white';
        ctx.fillText('No Video', 200, 240);
        const videoStream = canvas.captureStream();

        const stream = new MediaStream([...audioStream.getTracks(), ...videoStream.getTracks()]);
        return stream;
    }
}
