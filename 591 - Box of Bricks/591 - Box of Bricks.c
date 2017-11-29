#include<stdio.h>
int main()
{
    int i,_case=0;
    int array[101];
    int n,sum,div,count;

    while(scanf("%d",&n),n!=0)
    {
        _case++;
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
            sum+=array[i];
        }
        div=sum/n;
        count=0;
        for(i=0;i<n;i++)
        {
            if(array[i]>div)
                count+=(array[i]-div);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",_case,count);
    }
    return 0;
}
