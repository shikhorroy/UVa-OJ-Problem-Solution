#include<stdio.h>
int main()
{
    int num,i,j,iter,_case=0;//iter for iteration
    int sqr[10][10];

    while(scanf("%d",&num),num!=0)
    {
        _case++;

        for(i=0;i<num;i++)
            for(j=0;j<num;j++)
                scanf("%d",&sqr[i][j]);

        iter=num/2;

        printf("Case %d:",_case);

        int m,n,o,p,sum,init=0;//init for initialization
        while(num>iter)
        {
            sum=0;
            for(m=init;m<num;m++)
                sum+=sqr[init][m];

            for(n=init+1;n<num;n++)
                sum+=sqr[n][num-1];

            for(o=num-2;o>=init;o--)
                sum+=sqr[num-1][o];

            for(p=num-2;p>init;p--)
                sum+=sqr[p][init];

            printf(" %d",sum);

            num--;
            init++;
        }
        printf("\n");
    }
    return 0;
}
