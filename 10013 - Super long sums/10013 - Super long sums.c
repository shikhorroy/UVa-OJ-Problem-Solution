#include<stdio.h>
#include<string.h>
int main()
{
    long t,m;
    long i,j;
    unsigned long long num1,num2;
    char c1,c2,string1[1000010],string2[1000010];
    scanf("%ld%*c",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%*c",&m);
        for(j=0;j<m;j++)
        {
            scanf("%c%*c%c%*c",&c1,&c2);
            string1[j]=c1;
            string2[j]=c2;
        }
        string1[j]='\0';
        string2[j]='\0';

        num1=atol(string1);
        num2=atol(string2);
        printf("%llu\n",(num1+num2));
    }
    return 0;
}
