#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 0;
    char str[10];
    while(scanf("%s",str),str[0]!='*')
    {
        i++;
        if(str[0] == 'H') printf("Case %d: Hajj-e-Akbar\n",i);
        else printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
