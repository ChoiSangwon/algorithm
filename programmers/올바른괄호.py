from collections import deque
def solution(s):
    arr = deque()
    for i in s:
        if(i=='('):
            arr.append('(')
        else:
            if(len(arr)==0):
                return False
            else:
                arr.popleft()
    if(len(arr)==0):
        return True
    else:
        return False