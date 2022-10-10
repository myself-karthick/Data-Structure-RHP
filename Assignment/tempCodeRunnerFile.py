n = int(input("Enter the Weight of the string: "))
s ="ABCDEFGHIJKLMNOPQRSTUVWXZ"
c = 4
d={}
d['A']=1
d['B']=3
for i in range(2,len(s)):
    d[s[i]]=d[s[i-1]]*c
    if d[s[i]]>n:
        del d[s[i]]
        break
    c+=1
l=list(d.keys())
print("The character used are :")
print(l)
print("The string equal to given weight is: ")
res=''
for i in range(len(l)-1,-1,-1):
    r=n//d[l[i]]
    res+=l[i]*r
    n=n%d[l[i]]
    if n==0:
        break
print(res[::-1])