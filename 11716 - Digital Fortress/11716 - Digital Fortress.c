#include<stdio.h>
#include<string.h>
#include<math.h>
int i,j,add;
int T,length;
char str[10001];
int main()
{
    scanf("%d%*c",&T);
    while(T--)
    {
        gets(str);
        length = strlen(str);
        length = sqrt(length);
        if(length*length != strlen(str))
        {
            printf("INVALID\n");
            continue;
        }
        for( i = 0;i<length; i++)
        {
            add = 0;
            for( j =1; j<=length;j++)
            {
                printf("%c",str[i+add]);
                add+=length;
            }
        }
        printf("\n");
    }
    return 0;
}
