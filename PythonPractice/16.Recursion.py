#When a function calls itself repeatedly
#1. Print 5,4,3,2,1 in one line through recursion
def show(n):
    if(n==0):
        return
    print(n, end=" ")
    show(n-1)

show(5)

#2. Print factorial for n number through recursion
def fact(n):
    if (n==0 or n==1):
        return 1
    else:
        return fact(n-1)*n

print(fact(5))

#3. Write a Recursive function to calculate the sum of first n numbers
def calc_sum(n):
    if(n==0):
        return 0
    else:
        return calc_sum(n-1)+n
    
sum=calc_sum(5)
print(sum)