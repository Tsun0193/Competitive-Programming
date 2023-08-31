import math

n = int(input())
a = [0 for i in range(n+1)]

def check(i, j):
    for k in range(1, i):
        if a[k] == j or abs(a[k] - j) == abs(k-i):
            return False
    return True

def backtrack(i) -> int:
    cnt = 0
    for j in range(1, n+1):
        if check(i, j):
            a[i] = j
            if i == n:
                cnt += 1
            else:
                cnt += backtrack(i+1)
    return cnt

print(backtrack(1))