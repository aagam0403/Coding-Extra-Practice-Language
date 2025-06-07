#Creating a class
class Student1:
    def __init__(self,fullname,age):
        self.name=fullname
        self.sage=age

    #Class Methods (Class Functions)
    def hello(self):
        print("Hello",self.name)

    def get_age(self):
        return self.sage

    #Static Methods
    @staticmethod
    def College_name():
        print("ABCD College")


#Creating an object(instance)
s2 = Student1("Aagam",18)
print(s2.name,s2.sage)
s2.hello()
print(s2.get_age())
s2.College_name()