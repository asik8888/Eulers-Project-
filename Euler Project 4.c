// Find the largest palindrome made from the product of two 3-digit numbers which is less than N .

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

unsigned int ispalindrome(unsigned long orig);

int main(){
    int t; 
    printf("\n Enter number of iterations");
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {   int num; 
        printf("\n Enter a large number to determine the largest palindrome from product of two 3-digit number");  
        scanf("%d",&num);
        unsigned int p,n,m,max=0;
        for(n = 100;n<999;n++)
            for(m = 100;m<999;m++)
            {    
                if(n*m < num)
                {   p = n*m;
                    if(ispalindrome(p) && max<p)       
                    max = p;
                }   
            }
        printf("%d\n",max); 
    }
    return 0;
}

unsigned int ispalindrome(unsigned long orig)
{   unsigned long reversed = 0 , n = orig;
    while(n>0)
    {   reversed = reversed * 10 + n % 10;
        n /=10;
    }
    
    return (orig == reversed);
    
}
