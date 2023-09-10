import math

n, W = map(int, input().split())
w = []
v = []

for i in range(n):
    wi, vi = map(int, input().split())
    w.append(wi)
    v.append(vi)

dp = [0 for j in range(W+1)]

for i in range(n):
    for j in range(W, w[i] - 1, -1):
        dp[j] = max(dp[j-1], dp[j-w[i]] + v[i])

print(dp[W])