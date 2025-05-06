s="abbaa"
# print(s[::-1])
# if s==s[::-1]:
#     print("The given string is palindrome")
# else:
#     print("The given string is not palindrome")
n=len(s)
l,r=0,n-1
while l < r:
    if s[l]!=s[r]:
        print("The given string is not palindrome")
        break
    l+=1
    r-=1
    print("The given string is palindrome")