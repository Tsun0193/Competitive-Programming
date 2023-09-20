import math

k, n = map(int, input().split())
m = 1e9 + 7

def bincoef(n, k) -> int:
    dp = [[0 for i in range(k + 1)] for j in range(n + 1)]
    for i in range(n+1):
        for j in range(min(i, k) + 1):
            if j == 0 or j == i:
                dp[i][j] = 1
            else:
                dp[i][j] = (dp[i-1][j-1] % m + dp[i-1][j] % m) % m
    return round(dp[n][k]) 

print(bincoef(n, k))