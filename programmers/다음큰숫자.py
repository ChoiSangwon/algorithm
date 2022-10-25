def solution(n):
    res = bin(n).count('1')
    while True:
        n+=1
        if(bin(n).count('1')==res):
            return n