#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    int length;
    char c;
    char strng[100];

    while(scanf("%s%c",strng,&c) != EOF)
    {
        length = strlen(strng);
        for(i = length-1;i >= 0; i--)
            printf("%c",strng[i]);
        printf("%c",c);
    }
    return 0;
}
