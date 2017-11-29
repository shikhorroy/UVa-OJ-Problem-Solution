#include<stdio.h>
int main()
{
    int egg[32];
    int i,t_case,n,P,Q,T,off,temp,sum;
    scanf("%d",&T);
    for(t_case=1;t_case<=T;t_case++)
    {
        scanf("%d%d%d",&n,&P,&Q);
        for(i=0;i<n;i++)
            scanf("%d",&egg[i]);
        if(P>n)
            P=n;
        off=0;
        while(off==0)
        {
            sum=0;
            for(i=0;i<P;i++)
                sum+=egg[i];
            if(sum<=Q)
            {
                printf("Case %d: %d\n",t_case,P);
                off=1;
            }
            else
                P--;
        }
    }
    return 0;
}
