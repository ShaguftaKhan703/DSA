str1="ABCABC"
str2="ABC"
def gcd(len1,len2):
    while len2:
        len1,len2=len2,len1%len2
        print(len1,len2)
    return len1
print(str1[:gcd(len(str1),len(str2))])