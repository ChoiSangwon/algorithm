def solution(nums):
    count=len(nums)//2
    a=[]
    res=0
    for i in range(len(nums)):
        if(nums[i] not in a):
            a.append(nums[i])
            res+=1
        if(res==count):
            break
    return res