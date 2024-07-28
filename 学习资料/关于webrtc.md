1. **信令（Signaling）**：
   - 信令是用来交换会话控制信息、网络信息和媒体能力信息的过程。这些信息包括IP地址、端口、媒体编码格式等。
   - 信令通常通过一个服务器来完成，这个服务器可以是Web服务器、WebSocket服务器或者其他类型的服务器。
   - 信令服务器不参与实际的数据传输，只是帮助两个设备交换必要的信息。
2. **网络地址转换（NAT）穿透**：
   - 由于两个设备可能都没有公网IP，它们可能位于不同的NAT（Network Address Translation）后面。
   - WebRTC使用ICE（Interactive Connectivity Establishment）框架来发现最佳的通信路径。ICE使用STUN（Session Traversal Utilities for NAT）服务器来获取设备的公网IP地址和端口，使用TURN（Traversal Using Relays around NAT）服务器作为中继，如果直接连接失败。
3. **会话描述协议（SDP）**：
   - SDP是一种描述多媒体会话的格式，用于交换媒体信息，如编解码器、带宽、媒体类型等。
   - 在信令过程中，两个设备会交换SDP信息，以便它们可以理解对方的媒体能力。
4. **数据通道建立**：
   - 一旦信令和NAT穿透完成，两个设备就可以直接建立数据通道，进行音频、视频或数据的传输。







1. **获取媒体流**：
   - **客户端**：使用`navigator.mediaDevices.getUserMedia`方法获取本地媒体流（音频和/或视频）。
2. **创建RTCPeerConnection**：
   - **客户端**：创建`RTCPeerConnection`对象，并配置ICE服务器（如STUN或TURN服务器）。
3. **信令交换**：
   - **客户端**：创建和发送SDP offer/answer，收集和发送ICE候选。
   - **信令服务器**：中转SDP offer/answer和ICE候选信息，不参与实际的数据传输。
4. **连接建立**：
   - **客户端**：使用ICE候选尝试建立P2P连接。
   - **STUN/TURN服务器**：帮助客户端获取公网IP地址和端口，或作为中继服务器。
5. **数据通道建立**：
   - **客户端**：创建或接收数据通道（RTCDataChannel），用于发送文本消息、文件等数据。
6. **媒体流传输**：
   - **客户端**：通过`RTCPeerConnection`传输媒体流（音频和视频）。
7. **通信**：
   - **客户端**：通过数据通道发送和接收消息，通过媒体流进行音频和视频通信。
8. **关闭连接**：
   - **客户端**：关闭`RTCPeerConnection`和数据通道，并释放媒体流。