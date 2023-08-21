import math

def show(a):
    for i in a:
        print(i, end='')
    print()

def backtrack(i, n):
    if i == n:
        show(a)
    else:
        for j in range(1, n+1):
            if not check[j]:
                a[i] = j
                check[j] = True
                backtrack(i+1, n)
                check[j] = False

n = int(input())
a = [0]*n
check = [False]*(n+1)

backtrack(0, n)