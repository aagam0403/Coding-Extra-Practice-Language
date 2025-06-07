#dictionaries are used to store data values in key:value pairs
info = {
    "key" : "value",
    "name" : "aagam",
    "learning" : "coding",
    "age" : 35,
    "is_adult" : True,
    "marks" : 30.44
}
print(info)
print(type(info))
print(info["name"])       #if printing can be done on specific keys

#if want to change the value then
info["name"] = "Aagam Sanghvi"
print(info)

#we can also create null dictionary
null_dict = {}
print(null_dict)

#Nested Disctionaries
nest_dict={
    "name" : "Aagam",
    "marks" : {
        "maths" : 87,
        "science" : 25
    }
}
print(nest_dict)
print(nest_dict["marks"]["maths"])         #if printing can be done on specific keys

#Dictionary Methods
print(info.keys())             #returns all keys
print(len(info))               #returns length of dict
print(info.values())           #returns all values
print(info.items())            #returns all key and values as tuples
print(info.get("name"))        #returns the key according to values
info.update({"city" : "ahmd"})  #returns updated new key and value
print(info)