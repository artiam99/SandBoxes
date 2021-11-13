Socket.IO is a library that enables real-time, bidirectional and event-based communication b/w the browser and the server.



http vs Websockets

    http://google.com, http -> browser establishes a connection from your client computer to Google's server.
    
    Server receives https request in tcp packets sent from client and send back response.

    It's unirectional as client can send only request and server response.

    But TCP establishes a two way communication

    HTTP is stateless protocol that means server doesn't have to keep track of any state information.

    Server is not going to compare with previously requested http request.

    Stateless helps coz it's good for salability.

    Http request can be handled by different servers depending upon load.

    Server doesn't have to store states.

    http connection gets closed, tcp connection may be open.



    Web Sockets on the other hand is statefull.

    WebSocket is a computer communications protocol, providing full-duplex communication channels over a single TCP connection.

    Once Web Socket connection is established b/w client and server. Client can send message to that server only.
    
    If client starts sending thousands of messages, It's not good for load balancing and salability is not good.

    if websocket connection is lost then state will be lost. state means for each message client need not to mention who it is.



Socket.IO uses websockets for client server communication.

Plus it has extra features like broadcasting with other sockets, storing client data and Asynchronous I/O et.


Server -

    In server we will have to import server from http and initialize with socket.io. and we can add events -

    const express = require('express')
    const app = express()
    const server = require('http').Server(app) ... creating http server object with express server object.
    const io = require('socket.io')(server)  .... socket.io takes http server object 



    io('connection', (socket) => ... for establishing connection with client. socket has a socket.id
    {
        socket.on('event', (payload) => ... listening event in server
        {
            working with payload ... 

            socket.emit('event', { payload for client }) ... after working emitting event
        })
        

    })

    server.lister(PORT, () => { .. }) must be there not app.listen. (http server not express server)


Client -

    import io from 'socket.io-client'

    const socket = useRef() ... to declear in in one useEffect and using it in any of the function in the component.

    useEffect(() =>
    {
        if(!socket.current)
        {
            socket.current = io(baseUrl) ... 
        }

        if(socket.current)
        {
            socket.current.emit('join', { userId: user._id })

            socket.current.on('connectedUsers', ({ users }) =>
            {
                users.length > 0 && setConnectedUsers(users)
            })
        }

    }, []);