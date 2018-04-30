x=0
while x==0:
    try:
        num=int(input("Enter a Number : "))
        x=1
    except:
        print("Invalid Input ! ")
        x=0
    


dict={}
for i in range(1,int(num)+1):
	dict[i]=i*i

print(dict)
