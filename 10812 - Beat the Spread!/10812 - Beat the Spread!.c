#include<stdio.h>
int main()
{
    int sum,sub;
    int _case,i;
    int x,y;
    int tempX,tempY;
    scanf("%d",&_case);
    for(i=1;i<=_case;i++)
    {
        scanf("%d%d",&sum,&sub);
        if(sum>=sub)
        {
            x=(sum+sub)/2;
            y=sum-x;

            if(((x+y)==sum)&&((x-y)==sub))
                printf("%d %d\n",x,y);
            else
                printf("impossible\n");
        }
        else
            printf("impossible\n");
    }
    return 0;
}
