#include<stdio.h>
int main()
{
    int temp,i,j,k;
    int T,employe[3];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&employe[j]);

        for(j=0;j<2;j++)
            for(k=0;k<2-j;k++)
            {
                if(employe[k]>employe[k+1])
                {
                    temp=employe[k];
                    employe[k]=employe[k+1];
                    employe[k+1]=temp;
                }
            }
        printf("Case %d: %d",i,employe[1]);
        printf("\n");
    }
    return 0;
}
