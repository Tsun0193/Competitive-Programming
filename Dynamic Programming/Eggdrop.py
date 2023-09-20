import math

n, k = map(int, input().split())
dp = [[0 for i in range(n + 1)] for j in range(k + 1)]
#2D arrays in Python3 have the dimensions ordered differently than in C++ or Java

i = 0
while dp[i][n] < k:
    i = i + 1
    for j in range(1, n + 1):
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + 1
    
print(i)