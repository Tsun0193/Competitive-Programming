import math

def show(a):
    for i in a:
        print(i, end='')
    print()

def binary_permutation(i, n):
    if i == n:
        show(a)
    else:
        a[i] = 0
        binary_permutation(i+1, n)
        a[i] = 1
        binary_permutation(i+1, n)

n = int(input())
a = [0]*n
binary_permutation(0, n)