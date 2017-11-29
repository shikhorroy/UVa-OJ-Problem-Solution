#include<stdio.h>
#include<string.h>
char ch;
char store[]="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
int main()
{
    int i,j,l;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                for(j=0;j<strlen(store);j++)
                    if(ch==store[j])
                        printf("%c",store[j-2]);
            }
            else
            {
                ch=tolower(ch);
                for(j=0;j<strlen(store);j++)
                    if(ch==store[j])
                        printf("%c",store[j-2]);
            }
        }
        else
        {
            if(ch==' ')
                printf(" ");
            else if(ch=='\n')
                printf("\n");
            else
            {
                for(j=0;j<strlen(store);j++)
                    if(ch==store[j])
                        printf("%c",store[j-2]);
            }
        }
    }
    return 0;
}
