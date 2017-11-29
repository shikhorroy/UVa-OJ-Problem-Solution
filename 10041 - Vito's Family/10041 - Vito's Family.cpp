#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
long T,r,i;
long input[500];
int main()
{
    scanf("%ld",&T);
    while(T--)
    {
        long _min=50000000;

        scanf("%ld",&r);

        for(i=0;i<r;i++)
            scanf("%ld",&input[i]);

        sort(input,input+i);

        for(int j=0;j<r;j++)
        {
            long sum=0;
            for(int k=0;k<r;k++)
                sum+=abs(input[j]-input[k]);

            _min=min(sum,_min);
        }
        printf("%ld\n",_min);
    }
    return 0;
}
