// sum of square difference ans = (1+2+3+4+....)^2 - (1^2 + 2^2 + 3^2 + 4^2 + .....)

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

unsigned long ssum(int input);

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        long difference; 
        scanf("%d",&n);
        difference = ssum(n);
        printf("%ld\n", difference);
    
    }
    return 0;
}

unsigned long ssum(int input)
{
    long int i,ans1=0,ans2=0,ans3=0;
    for(i = 1; i <= input; i++)
    {
        ans1 = ans1 + i;
        ans2 = ans2 + pow(i,2);
    }
    ans3 = pow(ans1,2) - ans2;
    return (ans3);
}
