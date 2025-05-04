s = input()

def swap_case(s):
    a=list(s)
    a.swapcase()
    res = ' '.join(a)
    return res
result = swap_case(s)
print(result)

    