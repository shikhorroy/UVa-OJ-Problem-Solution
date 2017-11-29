#include<stdio.h>
long long num[10000000];
int main()
{
    int off;
    long long i,j;
    long long N,M,num1,num2,min;
    while(scanf("%lld",&N)!=EOF)
    {
        off=0;
        num1=num2=0;
        min=1000002;
        for(i=0;i<N;i++)
            scanf("%lld",&num[i]);
        scanf("%lld",&M);
        for(i=0;i<N-1;i++)
        {
            if(off==1)
                break;
            for(j=i+1;j<N;j++)
                if((num[i]+num[j])==M)
                {
                    if (num[i]==num[j])
                    {
                        off=1;
                        num1=num2=num[i];
                        break;
                    }
                    else if(num[i]>num[j])
                    {
                        if((num[i]-num[j])<min)
                        {
                            min=num[i]-num[j];
                            num1=num[i],num2=num[j];
                        }
                     }
                    else
                    {
                        if((num[j]-num[i])<min)
                        {
                            min=num[j]-num[i];
                            num1=num[j],num2=num[i];
                        }
                    }
                }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",num2,num1);
    }
    return 0;
}
