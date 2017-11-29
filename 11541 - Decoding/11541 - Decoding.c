#include<stdio.h>
char ch;
int i,T,N,Case,check;
int main()
{
    scanf("%d%*c",&T);
    while(T--)
    {
        check = 0;
        while(scanf("%c",&ch))
        {
            if(ch == '\n')
                break;
            scanf("%d",&N);
            if(check==0)
            {
                printf("Case %d: ",++Case);
                check = 1;
            }
            for(i=0;i<N;i++)
                printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
