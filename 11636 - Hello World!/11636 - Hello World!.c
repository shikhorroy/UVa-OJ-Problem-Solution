#include<stdio.h>
#include<math.h>
int main()
{
    int  N;
    int x,_case=0;

    while(scanf("%d",&N),N>0)
    {
        _case++;

        x=log(N)/log(2);
        if(pow(2,x)==N)
            printf("Case %d: %d\n",_case,x);
        else
            printf("Case %d: %d\n",_case,x+1);
    }

    return 0;
}
