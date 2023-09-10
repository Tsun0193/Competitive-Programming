import math

n, s = map(int, input().split())
coins = list(map(int, input().split()))

dp = [math.inf for i in range(s + 1)]
dp[0] = 0

for i in range(1, s + 1):
    for j in range(n):
        if i >= coins[j]:
            dp[i] = min(dp[i], dp[i - coins[j]] + 1)

if dp[s] == math.inf:
    print(-1)
else:
    print(dp[s])
