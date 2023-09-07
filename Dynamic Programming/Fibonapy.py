import math

def fib1(n):
    if n == 0 or n == 1:
        return 1
    return fib1(n - 1) + fib1(n - 2)
#Recursion: O(2^n)

def fib21(n):
    f = [0] * (n + 1)
    f[0] = 0
    f[1] = 1

    for i in range(2, n + 1):
        f[i] = f[i - 1] + f[i - 2]

    return f[i]
#DP: O(n) - Bottom-up with Memoization

def fib22(n):
    a = 0
    b = 1
    res = 0

    if n == 0:
        return a
    for i in range(2, n + 1):
        res = a + b
        a = b
        b = res

    return res
#DP: O(n) - Bottom-up without Memoization

f = [0] * 100005
def fib3(n):
    if n <= 1: 
        return n
    if f[n] != 0:
        return f[n]
    f[n] = fib3(n - 1) + fib3(n - 2)
    return f[n]
#Recursion: O(n) - Top-down with Memoization

def fib4(n):
    binpow = lambda a, b: a if b == 1 else binpow(a * a, b // 2) if b % 2 == 0 else a * binpow(a * a, b // 2)
    return round(binpow((1 + math.sqrt(5)) / 2, n) / math.sqrt(5))
#Binary Exponentiation + Golden Ratio Approach: O(log(n))

n = int(input())
print(fib4(n))