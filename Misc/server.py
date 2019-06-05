'''
Created on May 24, 2019
first try
@author: home
'''
from serial import Serial
import asyncio
import tornado.websocket
import tornado.ioloop
import tornado.web
import socket
import urllib
from email import message

import aiohttp
import requests

class IndexHandler(tornado.web.RequestHandler):
    
    async def initialization_time(self,time):
        #tornado.ioloop.IOLoop.run_in_executor()
        #res = await loop.run_in_executor(executor, self.timer)
        #await asyncio.sleep(time)
        return 'done'
    
        
    async def get(self):
        #handlers.append(self)
        print('opening page')
        await self.render("index2.html")
        #self.write("hey ooo")
        #run in loop with run in executor
    
    async def post(self):
        print('from arduino')
        data = self.request.body
        print(data)

class FirstSocketHandler(tornado.websocket.WebSocketHandler):
    def open(self):
        #handlers.append(self)
        #print('handler2 ',handlers)
        print ("Second Websocket Opened")
        self.write_message("Second Socket Handler")

    async def on_message(self, message):
        print('message on Second Socket is *** ',message)
        #FirstSocketHandler.send_message(self,'from second')
        #self.write_message("You said: %s" % message)
        response1 = await loop.run_in_executor(None, requests.post, 'http://192.168.0.104:8080/post', message)
        print(response1.status_code)
        

    def on_close(self):
        print ("Second Websocket closed")
        
        

application = tornado.web.Application([
    (r'/', IndexHandler),
    (r"/ws1", FirstSocketHandler),
    #(r"/ws2", SecondSocketHandler),
    #(r"/ws3", crossTalk),
    ])


if __name__ == '__main__':
    
    
    port=8888
    application.listen(port)
    myIP = socket.gethostbyname(socket.gethostname())
    print ('*** Websocket Server Started at {}:{}***'.format(myIP, port))
    
    
    #new_var="hello"
    #print(new_var)
    #ards = Serial("COM3", 115200, timeout=10)
    #arduino_val = ards.read()
    #new_var = arduino_val.decode("utf-8") 
    #print(new_var)
    
    
    
    
    loop = asyncio.get_event_loop()
    loop.run_forever()