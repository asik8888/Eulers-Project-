import math

def lpf(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        x, y = divmod(n, i)
        if y == 0:
            return lpf(x) 
    return n


t = int(input("Enter number of iterations ").strip())
for a0 in range(t):
    n = int(input("Enter number to find largest divisible prime: ").strip())
    print(lpf(n))
