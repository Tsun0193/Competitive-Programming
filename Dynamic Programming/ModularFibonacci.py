import math

m = 1e9 + 7

def fib(n) -> int:
    if n <= 1:
        return n
    a = 0
    b = 1
    for i in range(2, n + 1):
        c = (a % m + b % m) % m
        a = b
        b = c
    return round(b)

n = int(input())
print(fib(n))