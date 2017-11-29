#include<stdio.h>
int n,i,j,k,l,temp,Case=0,check;
char str[1000001];
int main()
{
    while(gets(str))
    {
        if(str[0]=='\0')
            break;
        scanf("%d",&n);
        for(k=1;k<=n;k++)
        {
            check = 1;
            scanf("%d%d",&i,&j);
            if(k==1)
                printf("Case %d:\n",++Case);
            if(i==j)
            {
                printf("Yes\n");
                continue;
            }
            else if(i>j)
            {
                temp = i;
                i = j;
                j = temp;
            }
            for(l=i;l<j;l++)
            {
                if(str[l]!=str[l+1])
                {
                    printf("No\n");
                    check = 0;
                    break;
                }
            }
            if(check == 1)
                printf("Yes\n");
        }
        scanf("%*c");
    }
    return 0;
}
