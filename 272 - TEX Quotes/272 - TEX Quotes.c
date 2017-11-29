#include<stdio.h>
int main()
{
    int checker=0;
    char char_;
    while((scanf("%c",&char_))!=EOF)
    {
        if(char_=='"')
        {
            if(checker%2==0)
                printf("``");
            else
                printf("''");
            checker++;
        }
        else
            printf("%c",char_);
    }
    return 0;
}
