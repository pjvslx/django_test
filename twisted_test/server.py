# from twisted.internet import reactor
from twisted.internet import reactor
import traceback

def hello():
    print "hello world"

reactor.callWhenRunning(hello)
traceback.print_stack()
reactor.run()