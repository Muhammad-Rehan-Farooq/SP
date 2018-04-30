string=raw_input("Enter a space seprated words : ")
lit=[]
sett={1,2,3}
lst=list(string.split(' '))
lst.sort()
sett.clear()
sett=set(lst)
print("Unique and sorted words : ")
for i in sett:
	print i,
