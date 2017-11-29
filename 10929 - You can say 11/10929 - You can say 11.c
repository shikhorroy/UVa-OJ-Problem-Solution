#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long sum_odd,sum_even;
    unsigned long long length,i;
    char string[1010];

    while((scanf("%s",string)),strcmp(string,"0"))
    {
        sum_even=sum_odd=0;

        length=strlen(string);
        for(i=0;i<length;i+=2)
            sum_even+=(string[i]-'0');
        for(i=1;i<length;i+=2)
            sum_odd+=(string[i]-'0');

        if(sum_even>sum_odd)
            if((sum_even-sum_odd)%11==0)
                printf("%s is a multiple of 11.\n",string);
            else
                printf("%s is not a multiple of 11.\n",string);
        else
            if((sum_odd-sum_even)%11==0)
                printf("%s is a multiple of 11.\n",string);
            else
                printf("%s is not a multiple of 11.\n",string);
    }
    return 0;
}
