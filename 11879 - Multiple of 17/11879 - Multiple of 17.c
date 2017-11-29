#include<stdio.h>
int l, i;
int sum, mod;
char input_str[105];
int main()
{
    while(gets(input_str))
    {
        if((strlen(input_str)==1) && (input_str[0]=='0'))
            break;
        mod = 0;
        l = strlen(input_str);
        for(i = 0;i< l;i++)
        {
            sum = ((mod*10) +(input_str[i]-'0'));
            mod = sum %17;
        }
        if( mod == 0)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
