#include<stdio.h>
int main()
{
    int i;
    int num;
    for(i=1;;i++)
    {
        scanf("%d",&num);
        if(num==0)
            break;
        printf("Case %d: %d\n",i,num/2);
    }
}
