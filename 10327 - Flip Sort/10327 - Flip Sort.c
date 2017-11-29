#include<stdio.h>
int main()
{
    int totalelement,i,j,element[1010],count=0,temp;
    while((scanf("%d",&totalelement))!=EOF)
    {
        for(i=0;i<totalelement;i++)
             scanf("%d",&element[i]);
        for(i=0;i<totalelement;i++)
        {
            for(j=i+1;j<totalelement;j++)
                if(element[i]>element[j])
                    count++;
        }
        printf("Minimum exchange operations : %d\n",count);
        count=0;
    }
    return 0;
}
