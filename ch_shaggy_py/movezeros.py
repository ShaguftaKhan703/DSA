arr = [1, 2, 0, 4, 3, 0, 5, 0]
n = len(arr)
l, r = 0, n-1
while l < r:

    while l < r and arr[l]!=0:
        l+=1

    while l < r and arr[r]==0:
        r-=1

    if l < r:
        arr[l],arr[r]=arr[r],arr[l]


print(arr)    

