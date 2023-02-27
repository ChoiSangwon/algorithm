from collections import deque
import sys
d = [(0,0,1),(0,0,-1),(0,1,0),(0,-1,0),(1,0,0),(-1,0,0)]

while True:
    L,R,C=map(int,sys.stdin.readline().split())
    arr=[]
    if(L==R==C==0):
        exit()
    else:
        check=[[[0 for _ in range(C)]for _ in range(R)] for _ in range(L)]
        for i in range(L):
            tmp=[]
            for j in range(R):
                tmp.append( sys.stdin.readline())
            input()
            arr.append(tmp)
        si,sj,sk=0,0,0
        for i in range(L):
            for j in range(R):
                for k in range(C):
                    if(arr[i][j][k]=='S'):
                        si=i
                        sj=j
                        sk=k

        q=deque()
        q.append((si,sj,sk,0))
        check[si][sj][sk]=1
        flag=False
        while q:
            ci,cj,ck,count=q.popleft()
            if(arr[ci][cj][ck]=='E'):
                flag=True
                break
            for i,j,k in d:
                qi=ci+i
                qj=cj+j
                qk=ck+k
                if(0<=qi and qi<L and 0<=qj and qj<R and 0<=qk and qk<C and check[qi][qj][qk]==0 and arr[qi][qj][qk]!='#'):
                    check[qi][qj][qk]=1
                    q.append((qi,qj,qk,count+1))
                    
        if(flag):
            print("Escaped in "+str(count)+" minute(s).")
        else:
            print("Trapped!")
