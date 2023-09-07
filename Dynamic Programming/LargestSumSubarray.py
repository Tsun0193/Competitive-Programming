import math

n = int(input())
arr = list(map(int, input().split()))
dp = [0 for i in range(n + 1)]

def LargestSumSubseq(n, arr, dp) -> int:
    dp[0] = 0
    for i in range(1, n + 1):
        dp[i] = max(dp[i-1] + arr[i-1], arr[i-1])
    return max(dp)

print(LargestSumSubseq(n, arr, dp))

# Time complexity: O(n)