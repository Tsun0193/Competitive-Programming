import math

def LCS_Recursion(i1, i2, s1, s2):
    if i1 * i2 == 0 :
        return 0
    else:
        if s1[i1-1] == s2[i2-1] :
            return 1 + LCS_Recursion(i1 - 1, i2 - 1, s1, s2)
        else:
            return max(LCS_Recursion(i1 - 1, i2, s1, s2), LCS_Recursion(i1, i2 - 1, s1, s2))

def LCS(s1, s2):
    m = len(s1)
    n = len(s2)
    dp = [[0] * (n+1) for i in range(m+1)]
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if s1[i-1] == s2[j-1] :
                dp[i][j] = 1 + dp[i - 1][j - 1]
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    return dp[m][n]

s1 = input()
s2 = input()
print(LCS(s1, s2))
print(LCS_Recursion(len(s1), len(s2), s1, s2))