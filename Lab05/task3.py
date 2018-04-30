string=raw_input("Enter a comma seprated numbers : ")
	

lst=[]
tple=[]

lst=list(string.split(','))
tple=tuple(string.split(','))

print('List is : ',lst)
print('Tuple is : ',tple)
