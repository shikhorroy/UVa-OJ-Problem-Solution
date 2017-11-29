#include<cstdio>
long long int fib[52];
int i;
int cnum, tnum;
int main()
{
    fib[0] = fib[1] = 1;
    for(i = 2; i != 52; i++)
        fib[i] = fib[i-1] + fib[i-2];
    scanf("%d",&cnum);
    while(cnum--)
    {
        scanf("%d",&i);
        printf("Scenario #%d:\n%lld\n\n",++tnum,fib[i+1]);
    }
    return 0;
}
