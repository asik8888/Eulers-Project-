import sys


t = int(input("Enter number of iterations ").strip())
for a0 in range(t):
    n = int(input("Enter Upper limit to calculate sum of even fibonacci ").strip())
    if (n == 0):
        print ("even sum is zero")
        break
    elif (n ==1):
        print("even sum is 0")
        break
    else:
        f1 = 1
        f2 = 2
        isum = 0
        esum = 0
        for i in range (2,n):
            if(isum>n):
                break
            else:
                
                isum = f1 + f2
                f1 = f2
                f2 = isum
                if(f1%2 == 0):
                    esum += f1
        print (esum)
