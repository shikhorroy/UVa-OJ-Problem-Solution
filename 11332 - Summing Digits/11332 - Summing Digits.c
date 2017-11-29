#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char string_num[20];
    int summation,sum;

    while(scanf("%s",string_num),strcmp(string_num,"0"))
    {
        summation=0;

        for(i=0;i<strlen(string_num);i++)
            summation+=(string_num[i]-'0');

        while(summation>9)
        {
            sum=0;
            while(summation!=0)
            {
                sum+=summation%10;
                summation/=10;
            }
            summation=sum;
        }
        printf("%d\n",summation);
    }
    return 0;
}
