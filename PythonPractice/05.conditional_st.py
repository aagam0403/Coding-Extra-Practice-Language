#if-else Statement
age=int(input("Enter Age = "))
print("Entered Age is = ",age)

if(age>18) :
    print("You are Eligible for Voting")
else :
    print("Not Eligible for Voting")

#if-else ladder Statement
marks=int(input("Enter Marks = "))
print(marks)

if(marks>=80):
    print("Grade = A")
elif(marks>=50):
    print("Grade = B")
else :
    print("Grade = C")

#Ternary Conditional Statement
food=input("Food = ")
eat="Yes" if (food=="Cake") else "no"
print(eat)

#Match Statement
status = 404
match status:
    case 200:
        print("OK")
    case 404:
        print("Not Found")
    case _:
        print("Unknown status")