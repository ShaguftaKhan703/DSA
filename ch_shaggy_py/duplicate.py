# nums=[2,3,5,5,4,2,2]
# frequent=max(set(nums), key=nums.count)
# print(frequent)
# nums.sort()
# print(nums)
# n = len(nums)
# print(nums[n//2])
nums = [1,2]
k = 3
n=len(nums)
print(nums[-k:n]+nums[-n:-k])