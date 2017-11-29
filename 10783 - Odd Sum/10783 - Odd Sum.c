#include<stdio.h>
int main()
{
    int T,r,a,d,N;
    int i,sum,_case=0;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        _case++;

        scanf("%d%d",&a,&N);

        if(a%2==0)
            a++;
        if(N%2==0)
            N--;

        r=((N-a)/2)+1;
        sum=r*(a+r-1);

        printf("Case %d: %d\n",_case,sum);

    }

    return 0;
}
