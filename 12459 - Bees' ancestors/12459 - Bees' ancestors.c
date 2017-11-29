#include<stdio.h>
int main()
{
    int i,input;
    long long gen[80];
    gen[0]=1;
    gen[1]=2;
    for(i=2;i<=79;i++)
        gen[i]=gen[i-1]+gen[i-2];
    while(scanf("%d",&input),input!=0)
        printf("%lld\n",gen[input-1]);
    return 0;
}
