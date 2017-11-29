#include<stdio.h>
int main()
{
    long long store[1000]={0};
    long long num,i;
    while((scanf("%lld",&num)),num>=0)
    {
        for(i=0;;i++)
        {
            store[i]=num%3;
            num/=3;
            if(num==0)  break;
        }
        for(;i>=0;i--)
            printf("%lld",store[i]);
        printf("\n");
    }
    return 0;
}
