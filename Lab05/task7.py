string=raw_input("Enter a line : ")
letter=0
digit=0

for i in string:
	if (i>='A' and i<='Z') or (i>='a' and i<='z'):
		letter=letter+1
	elif i>='0' and i<='9':
		digit=digit+1

print("Letters ",letter," | Digit ",digit)
