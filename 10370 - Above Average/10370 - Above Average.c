#include<stdio.h>
void aboveAverage(int N,int num,int array[]);
int main()
{
    int i,j;
    int c,N,num[1002];
    int sum;

    scanf("%d",&c);

    for(i=0;i<c;i++)
    {
        scanf("%d",&N);

        sum=0;

        for(j=0;j<N;j++)
        {
            scanf("%d",&num[j]);
            sum+=num[j];
        }
        aboveAverage(N,sum,num);
        printf("\n");
    }

    return 0;
}

void aboveAverage(int N,int num,int array[])
{
    int i,count=0;
    float average,result;

    average=(float)num/N;

    for(i=0;i<N;i++)
    {
        if(array[i]>average)
            count++;
    }
    result=((float)count/N)*100;
    printf("%.3f%%",result);
}
