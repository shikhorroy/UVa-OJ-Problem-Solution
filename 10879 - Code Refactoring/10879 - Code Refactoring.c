#include<stdio.h>
int main()
{
    int count;
    long long T,i,j;
    long long num;

    scanf("%lld",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%lld",&num);
        count=0;
        printf("Case #%d: ",i);
        for(j=2;count!=2;j++)
        {
            if((num%j)==0)
            {
                if(count!=1)
                    printf("%lld = %lld * %lld ",num,j,num/j);
                else
                    printf("= %lld * %lld\n",j,num/j);
                count++;
            }
        }
    }

    return 0;
}
