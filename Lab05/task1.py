x=2000
y=3200
list=[]

for i in range(2000,3201):
	if i%7==0 and i%5!=0:
		list.append(i)

print("Showing Numbers that are divisible by 7 not by 5")
print(list)
