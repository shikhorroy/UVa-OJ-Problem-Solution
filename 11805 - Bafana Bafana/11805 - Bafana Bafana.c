#include<stdio.h>
int main()
{
    int T,N,K,P;
    int i;
    int sum;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&N,&K,&P);

        sum=K+P;
        if(sum>N)
            if(sum%N==0)
                printf("Case %d: %d\n",i,N);
            else
                printf("Case %d: %d\n",i,(sum%N));
        else
            printf("Case %d: %d\n",i,sum);

    }

    return 0;
}

