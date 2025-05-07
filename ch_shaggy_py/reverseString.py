s="Ilovecoding"

#appoarch-1
# print(s[::-1])

#appoarch-2
s=list(s)
n=len(s)
l,r=0,n-1
while l<r:
    s[l],s[r]=s[r],s[l]
    l+=1
    r-=1
print("".join(s))