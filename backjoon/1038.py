from collections import deque

def solve(N):
    if N <= 9:  
        return N
    q= deque(range(1, 10))  
    count = 9 
    while q:
        num = q.popleft()
        last_digit = num % 10
        for next_digit in range(last_digit):
            new_num = num * 10 + next_digit
            q.append(new_num)
            count += 1
            if count == N:
                return new_num 
    return -1  
N = int(input())
print(solve(N))
