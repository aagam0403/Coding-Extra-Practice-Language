#Created a 2 String Variables
str1 = "aagam" 
str2 = "Sanghvi"

#Printing the String
print("String 1 : ",str1)
print("String 2 : ",str2)
print()

#Concatenate of String
print("Concatenate of String : ",str1+" "+str2)

#Length of String
print("Length of String 1 : ",len(str1))

#Indexing of String
print("String 1 Index Number 2 = ",str1[2])
print("String 2 Index Number 0 = ",str2[0])

#SLicing of a String (Accessing parts of a string)
#Syntax of slicing the string is "str[startingindex : endingindex]"
print(str1[2:4])  # Output: "ga" (index 2 is 'g', index 3 is 'a')
print(str1[ :4])  # Output: "aaga" (from start to index 3)
print(str1[3: ])  # Output: "am" (from index 3 to end)
print(str[-5:-2])

#Ends with Function
print(str1.endswith("am."))

#Capitalized 1st Character
print(str1.capitalize())

#Replacing the word
str2=str1.replace("aagam","saiyam")
print(str2)

#Finding the word
print(str1.find("m"))

#Counting the word from string
print(str1.count("a"))
