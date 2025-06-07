#Inheritance - When one class derives the properties & methods of another class
#1. Single Inheritance
class car:
    @staticmethod
    def start():
        print("Car Started...")

    @staticmethod
    def stop():
        print("Car Stopped...")

class ToyotaCar(car):     #car class inherited
    def __init__(self,name):
        self.name = name

car1= ToyotaCar("Fortuner")

print(car1.name)
print(car1.start())

#2. Multi-Level Inheritance
class car:
    @staticmethod
    def start():
        print("Car Started...")

    @staticmethod
    def stop():
        print("Car Stopped...")

class ToyotaCar(car):     #car class inherited
    def __init__(self,brand):
        self.brand = brand

class Fortuner(ToyotaCar):  #toyotacar class inherited
    def __init__(self,type):
        self.type = type

car1 = Fortuner("Diesel")
car1.start()

#3. Multiple Inheritance
class a:
    varA = "Welcome to class A"

class b:
    varB = "Welcome to class B"

class c(a,b):
    varC = "Welcome to class C"

c1=c()
print(c1.varA)
print(c1.varB)
print(c1.varC)