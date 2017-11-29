#include<stdio.h>
int main()
{
    int case_,totalelement,i,j,element[55],count=0,temp;
    scanf("%d",&case_);
    while(case_--)
    {
       scanf("%d",&totalelement);
        for(i=0;i<totalelement;i++)
             scanf("%d",&element[i]);
        for(i=0;i<totalelement;i++){
            for(j=i+1;j<totalelement;j++)
                if(element[i]>element[j])
                {
                    temp=element[i];
                    element[i]=element[j];
                    element[j]=temp;
                    count++;
                }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
        count=0;
    }
    return 0;
}
