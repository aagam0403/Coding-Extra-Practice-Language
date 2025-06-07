#Functions in python means Block of stetements which perform specific tasks
#def keyword is used to define function

def calc_sum(a,b):
    sum = a+b
    print(sum)
    return sum
calc_sum(5,2)

#Function to create average of 4 numbers
def avg_num(a,b,c,d):
    return (a+b+c+d)/4

print(avg_num(1,2,3,4))

#There are 4 types of built in functions in python
#1.print(), 2.len(), 3.type(), 4. Range, etc

#Practice
#1. WAF to print the length of list
cities=["Pune","Ahmedabad","Mumbai"]
def len_list(list):
    print(len(cities))

len_list(cities)

#2. WAF to print the list elements in a single line
def print_list (list):
    for item in list :
        print(item, end=" ")

print_list(cities)

#3. WAF to find Factorial of n number (n is parameter)
def find_fact(n):
    fact=1
    for i in range(1, n+1) :
        fact=fact*i
        print(fact)
    
find_fact(4)

#4. WAF to convert USD to INR
def conversion(usd):
    inr=usd*83
    print(inr)

conversion(150)