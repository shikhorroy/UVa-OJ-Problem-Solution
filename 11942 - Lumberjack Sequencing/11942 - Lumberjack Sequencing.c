#include<stdio.h>
int main()
{
    int T,i,j,flag;
    int array[10];
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {
        flag=1;
        for(i=0;i<10;i++)
            scanf("%d",&array[i]);
        if(j==0)
            printf("Lumberjacks:\n");
        if(array[0]>array[1])
            flag=2;

        if(flag==2)
        {
            for(i=1;i<9;i++)
            {
                if(array[i]<=array[i+1])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                printf("Unordered\n");
            else
                printf("Ordered\n");
        }
        else
        {
            for(i=1;i<9;i++)
            {
                if(array[i]>=array[i+1])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                printf("Unordered\n");
            else
                printf("Ordered\n");
        }
    }
    return 0;
}
