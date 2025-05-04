words=["a","aba","ababa","aa"]
n=len(words)
ans=0
for i in range(n):
            s1 = words[i]
            for j in range(i + 1, n):
                s2 = words[j]