import math

n = int(input())
a = list(map(int, input().split()))
m = int(input())
l, r = [], []

for i in range(m):
    x, y = map(int, input().split())
    l.append(x)
    r.append(y)

def solve1():
    for i in range(m):
        sum = 0
        for j in range(l[i], r[i]+1):
            sum += a[j]
        print(sum, end='\n')

def solve2():
    prefix = [0] * (n+1)
    prefix[0] = 0

    for i in range(1, n + 1):
        prefix[i] = prefix[i-1] + a[i-1]
    
    for i in range(m):
        print(prefix[r[i] + 1] - prefix[l[i]], end='\n')

solve1()
print()
solve2()