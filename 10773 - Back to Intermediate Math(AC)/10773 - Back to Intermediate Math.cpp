#include <cmath>
#include <cstdio>
int main()
{
    int cases;
    scanf("%d", &cases);
    for(int c = 0, d, v, u; c++ < cases; )
    {
        scanf("%d %d %d", &d, &v, &u);
        printf("Case %d: ", c);
        if(v < u && u && v) printf("%.3lf\n", d / sqrt(u*u - v*v) - d / double(u));
        //Equation thekei bojha jacche if,
        //(u == v || v > u )|| (u == 0 || v == 0)
        //then output: "can\'t determine"
        else puts("can\'t determine");
    }
    return 0;
}
