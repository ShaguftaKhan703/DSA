my_arr=[51,34,35,11,7,8,15]

n=len(my_arr)
for i in range(n-1):
    min_index=i
    for j in range(i+1,n):
        if my_arr[j]<my_arr[min_index]:
            min_index=j
            # the below logic is taking lots of time
    # min_value=my_arr.pop(min_index)
    # my_arr.insert(i,min_value)
    # improvement and swap logic
    my_arr[i],my_arr[min_index]=my_arr[min_index],my_arr[i]
print("Sorted array:",my_arr)