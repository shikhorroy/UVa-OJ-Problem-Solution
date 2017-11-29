#include<stdio.h>
int main()
{
    long long i,j,sum;
    long long n,f,size,environment;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%lld",&f);
        for(j=0;j<f;j++)
            scanf("%lld%*lld%lld",&size,&environment),sum+=(size*environment);
        printf("%lld\n",sum);
    }
    return 0;
}
