str = 'i.like.this.program.very.much'
str2=str.split('.')
print(str2)
n=len(str2)
left,right=0,n-1
while left<right:
    str2[left],str2[right]=str2[right],str2[left]
    left+=1
    right-=1
print(".".join(str2))