#include<stdio.h>
#define i64 long long
i64 F(i64 N,i64 P,i64 M)
{
    if(P==0) return 1;
    if(P % 2==0)
    {
        i64 ret=F(N,P/2,M);
        return ((ret%M)*(ret%M))%M;
    }
    else return ((N%M)*(F(N,P-1,M)%M))%M;
}
int main()
{
    i64 B,P,M,R;
    while(scanf("%lld %lld %lld",&B,&P,&M)!=EOF)
    {
        R = F(B,P,M);
        printf("%lld\n",R);
    }
    return 0;
}
