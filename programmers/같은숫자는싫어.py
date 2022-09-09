
def solution(arr):
    answer=[]
    count=-1
    for i in range(len(arr)):
        if(count!=arr[i]):
            answer.append(arr[i])
            count=arr[i]
    return answer