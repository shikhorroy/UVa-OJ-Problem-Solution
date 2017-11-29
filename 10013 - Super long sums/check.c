#include<stdio.h>
int a[1000002],b[1000002],result[1000002];
int main()
{
    int i,m,t,rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d%d",&a[i],&b[i]);
        rem=0;
        for(i=m-1;i>=0;i--)
        {
            result[i]=(a[i]+b[i]+rem)%10;
            rem=(a[i]+b[i]+rem)/10;
        }
        for(i=0;i<m;i++)
            printf("%d",result[i]);
        if(t)
            printf("\n\n");
        else
            printf("\n");
    }
    return 0;
}
