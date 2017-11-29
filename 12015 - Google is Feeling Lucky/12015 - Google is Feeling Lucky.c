#include<stdio.h>

int getBigOne(int array[]);

int main()
{
    int T;
    int i,j,bigrelevance;
    int relevance[11],temp[11];
    char web[11][101];

    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%s %d",web[j],&relevance[j]);
            temp[j]=relevance[j];
        }


        bigrelevance=getBigOne(relevance);

        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
            if(temp[j]==bigrelevance)
                 printf("%s\n",web[j]);
    }
    return 0;
}
int getBigOne(int array[])
{
    int i,j;
    int temp;

    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }

    return array[9];
}
