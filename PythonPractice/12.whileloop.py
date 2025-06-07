#2 types of loop in python
#1. While Loop
count =1
while count<=5 :
    print("While Loop")
    count=count+1

#Practice Questions
#1. Print Numbers from 1 to 100
i=1
while i<=100 :
    print(i)
    i=i+1

#2. Print Numbers from 100 to 1
i=100
while i>=1 :
    print(i)
    i=i-1

#3. Print Multiplication Table
i=2
j=1
while j<=10 :
    print(i, "*", j, "=", i*j)
    j=j+1
    
#4. Print Elements
nums = [1,4,9,16,25,36,49,64,81,100]
idx=0
while idx < len(nums) :
    print(nums[idx])
    idx=idx+1

#While loop using break keyword
i=1
while i<=5 :
    print(i)
    if(i==3):
        break
    i=i+1

#While loop using continue keyword
i=0
while i<=5 :
    if(i==3):
        i=i+1
        continue
    print(i)
    i=i+1