#2 types of loop in python
#2. For Loop
#for loop
nums = [1,2,3,4,5]
for val in nums :
    print(val)

#for loop with else
nums=[1,2,3,4,5]
for val in nums :
    print(val)
else :
    print("Loop Ended")

#for loop with break statement
str="aagam"
for char in str :
    if(char=="g"):
        print("g found")
        break
    print(char)
else:
    print("END")

#Pass Keyword in Loops
for i in range(5):
    pass             #pass means "to skip"
print("pass")