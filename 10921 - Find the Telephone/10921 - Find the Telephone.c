#include<stdio.h>
int main()
{
    char char_;
    while((scanf("%c",&char_))!=EOF)
    {
        if(char_>='A' && char_<='C')
            printf("%d",2);
        else if(char_>='D' && char_<='F')
            printf("%d",3);
        else if(char_>='G' && char_<='I')
            printf("%d",4);
        else if(char_>='J' && char_<='L')
            printf("%d",5);
        else if(char_>='M' && char_<='O')
            printf("%d",6);
        else if(char_>='P' && char_<='S')
            printf("%d",7);
        else if(char_>='T' && char_<='V')
            printf("%d",8);
        else if(char_>='W' && char_<='Z')
            printf("%d",9);
        else
            printf("%c",char_);
    }
    return 0;
}

