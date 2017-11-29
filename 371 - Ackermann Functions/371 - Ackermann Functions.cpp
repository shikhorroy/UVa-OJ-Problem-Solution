#include<stdio.h>
#define llu unsigned long long
int main()
{
    llu L, H, V, S, a, b;
    while(scanf("%llu %llu",&a,&b))
    {
        if(a == 0 && b == 0)    break;
        if(a < b)   L = a, H = b;
        else    L = b, H = a;
        llu cycle, max_cycle = 0, tx;
        for(llu x = L; x <= H; x++)
        {
            cycle = 1, tx = x;
            if(tx % 2)   tx = (3 * tx)+1;
            else    tx = tx / 2;
            while(tx != 1)
            {
                if(tx % 2)   tx = (3 * tx)+1;
                else    tx = tx / 2;
                cycle++;
            }
            if(cycle > max_cycle)
            {
                V = x;
                S = cycle;
                max_cycle = cycle;
            }
        }
        printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n",L,H,V,S);
    }
    return 0;
}
