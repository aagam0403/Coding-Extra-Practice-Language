#Lists means a built-in data type that stores set of values
marks=[94,52.25,63.41,45.1,28]
print(marks)
print(marks[2])      #printing 2nd index of marks
print(type(marks))   #type of marks
print(len(marks))    #total length of marks

students=["Aagam",85,"Saiyam","Hetvi","Tarak",98]
print(students)
print(students[0])      #printing 2nd index of marks

#List Slicing
print(students[3: ])
print(students[ :4])
print(students[3:4])

#List Methods
marks.append(5)
marks.sort()
marks.sort(reverse=True) #Reverse the List
marks.remove(94)
marks.insert(3,599)      #first index, second - value to add
marks.pop(3)
print(marks)