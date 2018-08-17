# Sum of multiples of 3 and 5 under number 'N'

import sys

def cal(multiple, t_num):
    num_elements = (t_num-1)//multiple
    sum = multiple * (num_elements * (num_elements+1)) // 2
    return sum


t = int(input("Enter number of multiples needs ").strip())
for a0 in range(t):
    n = int(input("Enter upper limit " ).strip())
    sum = 0;
    
    #sum of three's 
    three = cal(3,n)
    #sum of five's
    five = cal(5,n)
    #sum of fifteen's
    fifteen = cal(15,n)
    
    sum_of_number = three + five - fifteen
    print (sum_of_number)
    
