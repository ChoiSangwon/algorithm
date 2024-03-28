# n=int(input())
# dp1,dp2,dp3=0,1,1
# for i in range(2,n+1):
#     dp3=(dp2%1000000007+dp1%1000000007)%1000000007
#     dp1,dp2=dp2,dp3
# print(dp2)
MOD = 1000000007

def mat_mul(A, B):
    return [[(A[0][0]*B[0][0] + A[0][1]*B[1][0]) % MOD, (A[0][0]*B[0][1] + A[0][1]*B[1][1]) % MOD],
            [(A[1][0]*B[0][0] + A[1][1]*B[1][0]) % MOD, (A[1][0]*B[0][1] + A[1][1]*B[1][1]) % MOD]]

def mat_pow(A, n):
    if n == 1:
        return A
    if n % 2 == 0:
        half = mat_pow(A, n // 2)
        return mat_mul(half, half)
    else:
        return mat_mul(A, mat_pow(A, n-1))

def fib(n):
    if n == 0:
        return 0
    return mat_pow([[1, 1], [1, 0]], n)[0][1]

n = int(input())
print(fib(n))
