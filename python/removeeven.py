numbers=list(map(int,input("enter the numbers:").split()))
result=[]
for n in numbers:
    if n%2!=0:
        result.append(n)
        print(result)
