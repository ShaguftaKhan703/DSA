# from collections import Counter
# s = "annabelle"
# k = 2
# if k > len (s):
#      print(False)
# char_count =Counter(s)
# odd_count=sum(freq % 2 for freq in char_count.values())
# print(odd_count)
# print(odd_count <=k)
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
        print("The given string is not palindrome")#return 0
        break
    l+=1
    r-=1
    print("The given string is palindrome")#return 1