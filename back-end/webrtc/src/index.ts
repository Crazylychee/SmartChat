import { Hono } from 'hono'
import { AccessToken } from 'livekit-server-sdk';
import { cors } from 'hono/cors'
import { env } from 'hono/adapter'



const app = new Hono()

app.use('*',cors({
  origin: '*'
}
))




app.post('/token',  async (c) => {
  
  const { API_KEY,SECRET_KEY } = env<{ API_KEY: string , SECRET_KEY:string }>(c)

  const { roomName, participantName } = await c.req.json();

  const at = new AccessToken(
    API_KEY,
    SECRET_KEY,
    {
      identity: participantName,
    }
  );

  at.addGrant({ roomJoin: true, room: roomName, canPublish: true, canSubscribe: true });
  const token = await at.toJwt();
  return c.json({ token });

})

export default app