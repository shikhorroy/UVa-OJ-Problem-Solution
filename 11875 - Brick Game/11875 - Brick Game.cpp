#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j;
    int array[110];
    int T,N;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%d",&array[j]);
        sort(array,array+N);
        printf("Case %d: %d\n",i,array[(N/2)]);
    }
    return 0;
}
