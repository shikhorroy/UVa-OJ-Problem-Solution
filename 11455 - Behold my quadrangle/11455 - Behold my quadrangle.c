#include<stdio.h>
int main()
{
    long long array[4],i,j,k;
    long long case_,temp_num;

    scanf("%lld",&case_);

    for(i=0;i<case_;i++)
    {
        for(j=0;j<4;j++)
            scanf("%lld",&array[j]);

        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                if(array[k]>array[k+1])
                {
                    temp_num=array[k+1];
                    array[k+1]=array[k];
                    array[k]=temp_num;
                }

        if(array[0]==array[1]&&array[1]==array[2]&&array[2]==array[3])
            printf("square\n");
        else if(array[0]==array[1]&&array[2]==array[3])
            printf("rectangle\n");
        else if((array[0]+array[1]+array[2])>=array[3])
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
