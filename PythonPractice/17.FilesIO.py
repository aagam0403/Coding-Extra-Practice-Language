#1. Open file And Read Data from that file
f=open("17.sample.txt","r")
data=f.read()
print(data)

f1=open("17.sample.txt","r")
data1=f1.read(6)       #It returns first 6 characters
print(data1)
f1.close()

f=open("17.sample.txt","r")
printline=f.readline()
print(printline)        #It returns first line
f.close()

#2. Writing in a file
f=open("17.sample1.txt","w")
f.write("Aagam Sanghvi")

#3. Appending in a file
f=open("17.sample.txt","a")
f.write("Aagam Sanghvi is learning python")