#Lists means a built-in data type that stores set of values
tup=(94,52.25,63.41,45.1,28)
print(tup)
print(tup[2])      #printing 2nd index of tuple
print(type(tup))   #type of tuple
print(len(tup))    #total length of tuple

students=("Aagam",85,"Saiyam","Hetvi","Tarak",98)
print(students)
print(students[0])      #printing 2nd index of marks

#Tuplr Slicing
print(tup[3: ])
print(tup[ :4])
print(tup[3:4])

#Tuple Methods
print(tup.index(94))    #returns the index of first occurance 
print(tup.count(94))    #return the cound of the specific value