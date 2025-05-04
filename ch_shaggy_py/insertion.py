my_arr=[12,34,56,7,23,98,3]


n=len(my_arr)
for i in range(1,n):
    insert_index=i
    current_value=my_arr.pop(i)
    for j in range(i-1,-1,-1):
        if my_arr[j]>current_value:
            insert_index=j
    my_arr.insert(insert_index,current_value)
print("Sorted_array:",my_arr)