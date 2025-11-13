list1=list(map(int,input("enter list1:").split()))
list2=list(map(int,input("enter list2:").split()))
print("same length:",len(list1)==len(list2))
print("same equal:",sum(list1)==sum(list2))
common= False
for x in list1:
    if x in list2:
        common= True
        break
print("common present:",common)