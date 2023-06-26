from collections import deque

def solution(want, number, discount):
    answer = 0
    q=deque()
    for i in range(9):
        q.append(discount[i])
    for i in range(9,len(discount)):
        q.append(discount[i])
        
        flag=True
        for j in range(len(want)):
            if number[j]>q.count(want[j]) or want[j] not in q:
                flag=False
                break
        if(flag):
            answer+=1
        q.popleft()
    return answer