#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 1001
#define int64 long long
int main()
{
    int64 n, i;
    while(scanf("%lld",&n))
    {
        if(n == 0)  break;
        double val, cost[MAX], total = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%lf",&cost[i]);
            total += cost[i];
        }
        double average = total / n, result1 = 0.0, result2 = 0.0;
        for(i = 1; i <= n; i++)
        {
            double x = (cost[i]);
            if(x < average) result1 += (int64)((average - x)*100);
            else    result2 += (int64)((x - average)*100);
        }
        double result = (result1 > result2 ? result1 : result2);
        printf("$%.2lf\n",result/100);
    }
    return 0;
}
