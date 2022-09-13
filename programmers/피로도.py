from itertools import permutations
def solution(k, dungeons):
    answer = 0
    arr = [i for i in range(len(dungeons))]
    arr2 = list(permutations(arr,len(dungeons)))
    for i in range(len(arr2)):
        cmp = k
        count=0
        for j in range(len(arr2[i])):
            if(dungeons[arr2[i][j]][0]<=cmp):
                cmp-=dungeons[arr2[i][j]][1]
                count+=1
        if(count>answer):
            answer=count
    return answer