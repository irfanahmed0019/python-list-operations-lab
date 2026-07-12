import numpy as np
from faker import Faker

fake=Faker()#Create an instance of Faker
Faker.seed(7)#To stop Randomness
names=[fake.name() for _ in range(6)]
mark=np.arange(10,60,10)

print("----------qn1------------")
print("Names:",names)
print(f"Marks:{mark}\n")

print("----------qn2------------")
print(f"Names:{names[0:2]}\n")
print(f"Marks:{mark[0:2]}\n")

print("----------qn3------------")
print(f"Names:{names[-2:]}\n")

print("----------qn4------------")
print(f"Names:{names[2:5]}\n")

print("----------qn5------------")
print(f"Names:{names[2:-2]}\n")

print("----------qn6------------")
print(f"Names:{names[:3]}\n")


print("----------qn7------------")
print(f"Names:{names[2:]}\n")#omit end index (to get all elements from index 2 to the end)

print("----------qn8------------")
print(f"Names:{names[:-4]}\n")#omit start index (to get all elements from the beginning to index -4)

print("----------qn9------------")
print(f"Names:{names[1:-1]}\n")#omit first and last index (to get all elements from index 1 to -1)

print("----------qn10------------")
names.append(fake.name())#Add a new name to the list
print(f"Names:{names}\n")

print("----------qn11------------")
names.insert(2,fake.name())#Insert a new name at index 2
print(f"Names:{names}\n")

print("----------qn12------------")
new_names=[fake.name() for _ in range(3)]#Create a new list of names
print(f"\nNew Names:{new_names}\n")
names.extend(new_names)#Extend the original list with the new list
print(f"Names:{names}\n")

print("----------qn13------------")
names[2]="Kim"
print(f"Name : {names}\n")

print("----------qn14------------")
print(f"Total number of students = {len(names)}\n")

print("----------qn15------------")
print(f"Min marks = {mark.min()}\nMax marks = {mark.max()}\n")

print("----------qn16------------")
print(f"Sort = {np.sort(mark)}\n")


k=[1,2,3,4,5]
print(f"Sort={sorted(k)}\n")#Sort a list using sorted() function

print("----------qn17------------")
m1=mark.tolist() #Convert numpy array to list
R_names=names.copy()
R_mark=m1

R_names.reverse()
R_mark.reverse()

print(f"Reverse={R_names}\n")
print(f"Reverse={R_mark}\n")

print("----------qn18------------")
name_copy=names.copy()
print(f"Names(Copy) : {name_copy}\n")

print("----------qn19------------")
names.append("Irfan")
names.insert(2,"Irfan")
print(f"Total count (irfan) appears in the list = {names.count("Irfan")}\n")

print("----------qn20------------")
print(f"                       Before Removal        \nNames : {names}\n\n")
names.remove("Ronald Martinez")
print(f"                       After Removal        \nNames : {names}\n")

print("----------qn21------------")

print(f"                       Before Removal        \nNames : {names}\n\n")
names.pop(2)#Remove student at 3rd position 
print(f"                       After Removal        \nNames : {names}\n")

print("----------qn22------------")
print(f"Total numbers of students = {len(names)}\n")
print(f"                       Before Removal        \nNames : {names}\n\n")
names.pop(10)#Remove student at last position 
print(f"                       After Removal        \nNames : {names}\n")

print("----------qn23------------")
del names[-1]#Remove student at last position
print(f"Names : {names}\n")

print("----------qn24------------")
del names[:]
print(f"Remove all student list using del keyword \nName : {names}\n")

print("----------qn25------------")
del m1[:]
print(f"Remove all student Mark-list using del keyword \nMarks : {m1}\n")
