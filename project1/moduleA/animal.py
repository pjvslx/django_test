class animal:
    def __init__(self,state):
        self._state = state
        print("animal state is %s" %self._state)

class dog(animal):
    def __init__(self,state):
        animal.__init__(self,state)
        print("dog state is %s" %self._state)
        pass

class cat(animal):
    pass

