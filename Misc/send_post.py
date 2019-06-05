'''
Created on May 26, 2019

@author: home
'''

import asyncio
import tornado.websocket
import tornado.ioloop
import tornado.web
import tornado
import socket
import urllib

import requests




if __name__ == "__main__":
    r = requests.get('http://www.google.com', auth=('user', 'pass'))
    print(r.status_code)
    r = requests.post("http://192.168.0.104:8080/post", data='type')



