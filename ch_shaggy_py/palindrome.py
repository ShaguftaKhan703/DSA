from collections import Counter
s = "annabelle"
k = 2
if k > len (s):
     print(False)
char_count =Counter(s)
odd_count=sum(freq % 2 for freq in char_count.values())
print(odd_count)
print(odd_count <=k)
        