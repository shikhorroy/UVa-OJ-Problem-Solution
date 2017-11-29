#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c;
    char key[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    int l = strlen(key);
    while(scanf("%c",&c)!=EOF)
    {
        if(c==' ')
            printf(" ");
        else if(c=='\n')
            printf("\n");
        else
            for(i=0;i<l;i++)
                if(c==key[i])
                    printf("%c",key[i-1]);
    }

    return 0;
}
