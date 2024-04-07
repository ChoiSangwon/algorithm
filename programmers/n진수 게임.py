def solve(n, q):
    res = ''
    if n==0:
        return '0'
    while n > 0:
        n, mod = divmod(n, q)
        if mod==10:
            res+='A'
        elif mod==11:
            res+='B'
        elif mod==12:
            res+='C'
        elif mod==13:
            res+='D'
        elif mod==14:
            res+='E'
        elif mod==15:
            res+='F'
        else:
            res += str(mod)
    return res[::-1] 
        

def solution(n, t, m, p):
    answer = ''
    res=""
    for i in range(t*m+1):
        res+=solve(i,n)
    for i in range(p-1,t*m,m):
        answer+=res[i]
    return answer