from collections import deque

def check(arr):
    tmp=deque()
    for i in arr:
        if(i==')'):
            if(len(tmp)!=0 and tmp[-1]=='('):
                tmp.pop()
            else:
                return False
        elif(i==']'):
            if(len(tmp)!=0 and tmp[-1]=='['):
                tmp.pop()
            else:
                return False
        elif(i=='}'):
            if(len(tmp)!=0 and tmp[-1]=='{'):
                tmp.pop()
            else:
                return False
        else:
            tmp.append(i)
    if(len(tmp)==0):
        return True
    else:
        return False
            

def solution(s):
    answer = 0
    q=deque()
    for i in s:
        q.append(i)
    for i in range(len(s)):
        if(check(q)):
            answer+=1
        
        tmp=q[0]
        q.popleft()
        q.append(tmp)
        
    return answer