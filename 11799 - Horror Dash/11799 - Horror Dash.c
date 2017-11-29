#include<stdio.h>
int main()
{
    int temp;
    int T,N;
    int i,j,k,array[100];

    scanf("%d",&T);
    for(k=1;k<=T;k++)
    {
        scanf("%d",&N);

        for(j=0;j<N;j++)
            scanf("%d",&array[j]);

        N--;

        for(i=0;i<N;i++)
            for(j=0;j<N-i;j++)
            {
                if(array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        printf("Case %d: %d\n",k,array[N]);
    }
    return 0;
}
