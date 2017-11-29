#include<stdio.h>
int main()
{
    int count;
    char ch;
    count=0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch))
        {
            count++;
            while(scanf("%c",&ch))
            {
                if(!(isalpha(ch)))
                    break;
            }
        }
        if(ch=='\n')
        {
            printf("%d\n",count);
            count=0;
        }
    }
    return 0;
}
