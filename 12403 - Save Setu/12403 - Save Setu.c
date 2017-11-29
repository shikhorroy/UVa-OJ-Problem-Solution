#include<stdio.h>
int main()
{
    char str[10];
    long num,sum=0,t_case;
    scanf("%ld",&t_case);
    while(t_case--)
    {
        scanf("%s",str);
        if(str[0]=='d')
        {
            scanf("%ld",&num);
            sum+=num;
        }
        else
            printf("%ld\n",sum);
    }
    return 0;
}
