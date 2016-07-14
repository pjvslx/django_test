from twisted.internet import reactor

class countdown():
    num = 5
    def count(self):
        if  self.num < 0:
            reactor.stop()
        else:
            print "self.num = " , self.num
            self.num = self.num - 1
            reactor.callLater(1,self.count)


print("start")
reactor.callWhenRunning(countdown().count)
reactor.run()