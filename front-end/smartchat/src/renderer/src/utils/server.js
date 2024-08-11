const http = require('http');
const socket = require('socket.io');
const server = http.createServer();
const io = socket(server, {
    cors: {
        origin: '*'
    }
});

io.on('connect', socket => {
    socket.emit('connectionSuccess');
    socket.on('hello', message => {
        console.log('客户端发来的消息：', message);
    });
    socket.on('joinRoom', roomId => {
        // 加入房间，没有就会创建房间
        socket.join(roomId);
        // 往房间内的客户端发送roomInfo事件
        io.to(roomId).emit('roomInfo', roomId)
    });
    socket.on('content', ({ roomId, content }) => {
        // 往房间内的客户端发送message事件
        io.to(roomId).emit('message', content)
    });
});

server.listen(3000, () => {
    console.log('服务启动：http://localhost:3000/');
});
