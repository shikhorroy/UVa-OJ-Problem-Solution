#include<stdio.h>
int main()
{
    long i,j=0;
    long intNum,sum;

    while(scanf("%ld",&intNum),intNum!=0)
    {
        if(j==0)
            printf("PERFECTION OUTPUT\n");

        sum=0;
        for(i=1;i<=intNum/2;i++)
            if(intNum%i==0)
                sum+=i;

        if(sum>intNum)
            printf("%5ld  ABUNDANT\n",intNum);
        else if(sum<intNum)
            printf("%5ld  DEFICIENT\n",intNum);
        else if(sum==intNum)
            printf("%5ld  PERFECT\n",intNum);

        j++;
    }
    printf("END OF OUTPUT\n");

    return 0;
}
