names=input("enter names:").split()
count=0
for name in names:
    count+=name.count('a')+name.count('A')
print("occurrences;",count)