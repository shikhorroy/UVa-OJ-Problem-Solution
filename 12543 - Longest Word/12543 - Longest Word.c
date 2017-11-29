#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count;
int l, store,max,i,j,k;
char input[10005][105];

int main()
{
    max = -1;
    while(scanf("%s",input[i]))
    {
        count = 0;
        if(!strcmp(input[i],"E-N-D"))
            break;
        l = strlen(input[i]);
        for(k=0;k<l;k++)
        {
            if(!isalpha(input[i][k]) && input[i][k]!='-')
                count++;
        }
        l-=count;
        if(l>max)
        {
            max = l;
            store = i;
        }
        i++;
    }
    i =store;
    for(j=0;j<strlen(input[i]);j++)
    {
        if(isupper(input[i][j]))
            printf("%c",tolower(input[i][j]));
        else if(islower(input[i][j]) || (input[i][j]=='-'))
            printf("%c",input[i][j]);
    }
    printf("\n");
    return 0;
}
