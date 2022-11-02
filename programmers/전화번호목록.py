from functools import cmp_to_key

def solve(a,b):
    if len(a)>len(b):
        return -1
    else:
        return 1

def solution(phone_book) :
    arr={}
    phone_book.sort(key=cmp_to_key(solve))
    for i in phone_book:
        if(i in arr):
            return False
        for j in range(len(i)):
            arr[i[:j+1]]=1
            
    return True

