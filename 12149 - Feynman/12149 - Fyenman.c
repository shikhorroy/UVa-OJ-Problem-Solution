#include <stdio.h>
int main()
{
    unsigned long long N,i,sum;
    while(scanf("%llu",&N), N!=0)
    {
        sum = 0;
        for(i=1;i<=N;i++)
            sum+=(i*i);
        printf("%llu\n",sum);
    }
    return 0;
}
