import math
from bisect import bisect_right

n = int(input())
a = list(map(int, input().split()))

def LIS(a):
    n = len(a)
    dp = [1] * n
    for i in range(n):
        for j in range(i):
            if a[i] > a[j]:
                dp[i] = max(dp[i], dp[j] + 1)
    return max(dp)
# Time Complexity: O(n^2)

def LIS2(a):
    n = len(a)
    dp = [math.inf] * n
    dp[0] = 0
    for i in range(n):
       j = bisect_right(dp, a[i])
       if dp[j - 1] < a[i] < dp[j]:
           dp[j] = a[i]
    ans = 0
    for i in range(n):
        if dp[i] < math.inf:
            ans = i

    return ans 



print(LIS(a))
print(LIS2(a))