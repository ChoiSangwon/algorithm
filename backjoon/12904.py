from collections import deque
s=input()
t=input()

q=deque()
q.append(t)
res=[]
while q:
    cur=q.popleft()
    res.append(cur)
    if cur==s:
        print(1)
        exit()
    if cur[-1]=='A' and len(cur)>len(s):
        q.append(cur[:-1])
    if cur[-1]=='B' and len(cur)>len(s):
        cur=cur[:-1]
        q.append(cur[::-1])
print(0)