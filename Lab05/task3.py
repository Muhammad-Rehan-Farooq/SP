import sys
string=raw_input("Enter a comma seprated numbers : ")
strr=""
lst=[]
tple=()
num=0
x=0
for i in string:
    if i==',':
        x=1
        try:
            num=int(strr)
            lst.append(num)
            strr=""
        except ValueError:
            print("Invalid Input, Not according to requirement!")
            sys.exit()
    else:
        strr+=i

try:
    num=int(strr)
    lst.append(num)
    strr=""
except ValueError:
    print("Invalid Input, Not according to requirement!")
    exit()

tple=tuple(string.split(','))

print('List is : ',lst)
print('Tuple is : ',tple)
