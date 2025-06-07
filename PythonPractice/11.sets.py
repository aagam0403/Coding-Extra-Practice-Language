#Sets is the collection of the unordered items.
#sets always ignores duplicate items
num = {1,2,3,4, "hello", "world"}
print(num)
print(len(num))                  #prints total number of items

nums = {1,2,2,2}                 #print only {1,2} because repeated elements are not in sets
print(nums)
print(type(nums))

null_set = set()
print(type(null_set))

#Sets Functions
sets = {1,2,3,4}
sets1 = {3,4,5,6}
sets.add(23)                 #adds the value
sets.remove(2)               #removes 26 value
sets.pop()                   #it randomly pops any elements
sets.clear()                 #to empty the set
print(sets)

print(sets.union(sets1))                     #it unions the both set
print(sets.intersection(sets1))              #it intersects the both set