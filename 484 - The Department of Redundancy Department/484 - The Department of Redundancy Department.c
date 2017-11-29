#include<stdio.h>
int count[10000],store[10000];
int main()
{
    int check;
    int i,j;
    int num;
    i=0;
    while(scanf("%d",&num)!=EOF)
    {
        check=0;
        for(j=0;j<i;j++)
        {
            if(num==store[j])
            {
                check=1;
                break;
            }
        }
        if(check==1)
        {
            count[j]++;
        }
        else
        {
            store[i]=num;
            count[i]++;
            i++;
        }
    }
    for(j=0;j<i;j++)
        printf("%d %d\n",store[j],count[j]);
    return 0;
}
