//smallest divisible number from 1 to 'N'
// Find LCM from 1 to 'N'
// find gcd .
// use formula lcm = n*m/gcd(n,m)

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

unsigned long gcd(unsigned long n,unsigned long m);
unsigned long lcm(unsigned long n,unsigned long m);

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n,i,ans=1; 
        scanf("%d",&n);
        for (i=1; i <= n; i++)
        {
            ans = lcm(ans,i);
        }
        printf("%d\n",ans);
    }
    return 0;
}

unsigned long gcd(unsigned long n,unsigned long m)
{
    int t;
    while(m!=0)
    {
        t=m;
        m=n%m;
        n=t;
    }
    return n;
}

unsigned long lcm(unsigned long n, unsigned long m)
{
    return(n*m/gcd(n,m));
}
