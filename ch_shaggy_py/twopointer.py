# nums=[0,1,0,3,12]
# for num in nums:
#             if(num==0):
#                 nums.insert(len(nums)-1,num)
# print(nums)
words1 = ["amazon","apple","facebook","google","leetcode"]
words2 = ["e","o"]
y=len(words2)
for word in words1:
    for j in range(y-1):
        if word.find(words2[j])>-1:
            j+=1
        else:
            print(word)
            words1.remove(word)
    
                