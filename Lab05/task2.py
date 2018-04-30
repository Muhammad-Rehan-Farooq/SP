num=raw_input("Enter a Number : ")
for i in num:
	if i<='0' or i>'9':
		print("Invalid Input!")
		exit()


dict={}
for i in range(1,int(num)+1):
	dict[i]=i*i

print(dict)
