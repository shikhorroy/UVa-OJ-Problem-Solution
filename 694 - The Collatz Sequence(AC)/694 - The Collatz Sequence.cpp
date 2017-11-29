#include<stdio.h>
int main()
{
    long long n, cycle, i, j, cs  = 0;
    while(scanf("%lld%lld",&i,&j))
    {
        if(i < 0 && j < 0)  break;
        cycle = 1;
        n = i;
        while(n != 1)
        {
            if(n > j)
            {
                cycle--;
                break;
            }
            cycle++;
            if(n % 2)
                n = (3*n+1);
            else
                n /= 2;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++cs,i,j,cycle);
    }
    return 0;
}
