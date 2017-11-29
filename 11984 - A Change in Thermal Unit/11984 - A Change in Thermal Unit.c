#include<stdio.h>
int main()
{
    int i,t_case=0;
    float C,F,d;
    scanf("%d",&t_case);
    for(i=1;i<=t_case;i++)
    {
        scanf("%f%f",&C,&d);
        F=((9*C)/5)+32;
        F+=d;
        printf("Case %d: %.2f\n",i,((F-32)*5)/9);
    }
    return 0;
}
