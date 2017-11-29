#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    long i, sum, length, add, count;

    while(scanf("%s",str),strcmp(str,"0"))
    {
        sum = 0;
        length = strlen(str);
        for(i = 0; i < length; i++)
            sum += (long)(str[i] - '0');

        if(sum % 9 == 0)
        {
            count = 1;
            while(sum != 9)
            {
                add = 0;
                while(sum != 0)
                {
                    add += sum%10;
                    sum /= 10;
                }
                sum = add;
                count++;
            }
            printf("%s is a multiple of 9 and has 9-degree %ld.\n",str,count);
        }
        else
            printf("%s is not a multiple of 9.\n",str);
    }
    return 0;
}
