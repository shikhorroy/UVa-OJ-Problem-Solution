#include<stdio.h>
int main()
{
    int T,L,W,H;
    int i,_case=0;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        _case++;
        scanf("%d%d%d",&L,&W,&H);

        if(L<=20 && W<=20 && H<=20)
            printf("Case %d: good\n",_case);
        else
            printf("Case %d: bad\n",_case);

    }

    return 0;
}
