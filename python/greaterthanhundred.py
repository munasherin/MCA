numbers=list(map(int,input("enter the numbers:").split()))
result=[]
for num in numbers:
    if num>100:
        result.append('over')
    else:
        result.append(num)
print (result)