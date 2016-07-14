#coding=utf-8
#就是就是
# import struct
# import socket
# import twisted
#
# ss = struct.pack("!H14s2i",100,"what the fuck",1,100);
# id,tag,version,count = struct.unpack("!H14s2i",ss)
# print "id = %d tag = %s version = %d count = %d" %(id,tag,version,count)

#创建SocketServerTCP服务器：
import SocketServer
from SocketServer import StreamRequestHandler as SRH
from time import ctime

host = '192.168.199.109'
port = 9999
addr = (host,port)

class Servers(SRH):
    def handle(self):
        print 'got connection from ',self.client_address
        self.wfile.write('connection %s:%s at %s succeed!' % (host,port,ctime()))
        while True:
            data = self.request.recv(1024)
            if not data:
                break
            print data
            print "RECV from ", self.client_address[0]
            self.request.send(data)
print 'server is running....'
server = SocketServer.ThreadingTCPServer(addr,Servers)
server.serve_forever()