# nums1 = [1,2,3,0,0,0]
# m = 3 
# nums2 = [2,5,6]
# n = 3

# j=0
# for j in range(n):
#     nums1[m+j] = nums2[j]
# nums1.sort()
# print(nums1)
# nums = [3,2,2,3]
# val = 3
# i=0
# n=len(nums)
# while i<=n-1:
#     if nums[i]!=val:
#         nums.pop(i)
#     i+=1
# print(nums)
nums = [2,7,11,15] 
target = 9
numMap={}
n=len(nums)
for i in range(n):
    complement=target-nums[i]
    if complement in numMap:
        print([numMap[complement], i])
    numMap[nums[i]]=i
print([])