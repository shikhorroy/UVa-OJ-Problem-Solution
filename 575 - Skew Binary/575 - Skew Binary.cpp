#include<bits/stdc++.h>
int main()
{
    long long i;
    long long skewNumber,length,temp;
    char input_str[500];
    while((scanf("%s",input_str)), strcmp(input_str,"0"))
    {
        skewNumber = 0;
        temp = length = strlen(input_str);
        for(i = 0;i < length;i++)
        {
            skewNumber += ((input_str[i] - '0') * ((pow(2, temp)) - 1));
            temp--;
        }
        printf("%lld\n",skewNumber);
    }

    return 0;
}
