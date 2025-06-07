#Creating a class
class Student:
    name="aagam"
    age=18
    def __init__(self):                #constructor
        print("adding new student")

#Creating an object(instance)
s1 = Student()
print(s1.name)
print(s1.age)


#Add name and age via constructor parameters
#Creating a class
class Student1:
    #Default Constructor
    def __init__(self):
        pass
     
    #Parameterized Constructor
    def __init__(self,fullname,age):
        self.name=fullname
        self.sage=age
        print("adding new student")

#Creating an object(instance)
s2 = Student1("Aagam",18)
print(s2.name,s2.sage)

s3=Student1("Saiyam",20)
print(s3.name,s3.sage)