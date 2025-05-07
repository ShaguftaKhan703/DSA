def main():
    s1='abcd'
    s2='acbd'
    print("true" if rotateStr(s1,s2) else "false")

def rotateStr(s1,s2):
    n=len(s1)
    for _ in range(n):
        if s1==s2:
            return True
        s1=s1[-1]+s1[:-1]
    return False
main()