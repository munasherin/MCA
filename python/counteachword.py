text=input("enter text:")
words=text.split()
words_count={}
for w in words:
    if w in words_count:
        words_count [w]+=1
    else:
            words_count [w]=1
print("word occurences;",words_count)       