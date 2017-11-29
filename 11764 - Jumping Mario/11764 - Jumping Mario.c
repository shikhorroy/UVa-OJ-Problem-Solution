#include<stdio.h>
int main()
{
    int T,N,hi_junp,lo_jump;
    int i,j,k,l;
    int wall[50];
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%d",&wall[j]);
        }

        hi_junp=0;
        lo_jump=0;

        for(k=0;k<N-1;k++)
        {
            if(wall[k]>wall[k+1])
                lo_jump++;
            else if(wall[k]<wall[k+1])
                hi_junp++;
        }

        printf("Case %d: %d %d\n",i,hi_junp,lo_jump);
    }


    return 0;
}

