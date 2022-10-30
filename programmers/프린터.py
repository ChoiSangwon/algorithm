from collections import deque 
def solution(priorities, location):
    answer = 0
    arr=deque()
    for i in range(len(priorities)):
        arr.append((i,priorities[i]))
    while True:
        check=False
        a,b = arr.popleft()
        # print(a,b)
        for i in range(len(arr)):
            if(arr[i][1]>b):
                arr.append((a,b))
                check=True
                break
        if(check):
            continue
        answer+=1
        if(a==location):
            break
        
    return answer