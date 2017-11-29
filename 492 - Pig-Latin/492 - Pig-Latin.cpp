#include<bits/stdc++.h>
int main()
{
    char c, end;
    while(scanf("%c",&c) == 1)
    {
        if(isalpha(c))
        {
            if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='O'||c=='o'||c=='U'||c=='u')
            {
                while(isalpha(c))
                {
                    putchar(c);
                    c = getchar();
                }
                printf("ay%c",c);
            }
            else
            {
                end = c;
                c = getchar();
                while(isalpha(c))
                {
                    putchar(c);
                    c = getchar();
                }
                printf("%cay%c",end,c);
            }
        }
        else
            printf("%c",c);
    }
    return 0;
}
