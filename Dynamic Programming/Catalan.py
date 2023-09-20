import math

mod = 1e9 + 7

n = int(input())

def Catalan(n: int) -> int:
    dp = [1 for i in range(n+1)]
    for i in range(2, n+1):
        dp[i] = 0
        for j in range(i):
            dp[i] += (dp[j] % mod * dp[i-j-1] % mod) % mod
    return round(dp[n])

print(Catalan(n))