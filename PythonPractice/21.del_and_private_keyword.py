#del keyword - used to delete object properties or object itself
class Student:
    def __init__(self, name):
        self.name = name

s1 = Student("Aagam")
print(s1.name)
del s1.name
print(s1.name)

#Private keyword - used to private any variable
class account:
    def __init__(self, accno, accpass):
        self.accno=accno
        self.__accpass=accpass
#if you write __ before the declaration of variable then it is automatically
#transferred to private variable

#you can also private full method like
#def __hello   then hello method is private

s1 = account(1234,"abcde")
print("Account No.", s1.accno)
print("Account Pass ",s1.accpass)