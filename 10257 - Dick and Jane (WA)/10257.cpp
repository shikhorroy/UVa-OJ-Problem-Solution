#include<cstdio>
#include<iostream>
#include<cmath>
#define d 12

using namespace std;

int main()
{
    int spot, puff, yertle, s, p, y, j;

    while(scanf("%d %d %d %d",&s, &p, &y, &j) == 4)
    {
        yertle = ((d + j) - (y + p)) / 3;
        spot = y + yertle;
        puff = p + yertle;
        if(spot + puff + yertle == d + j)
            printf("%d %d %d\n",spot, puff, yertle);
        else if((d + j) - (spot + puff + yertle) == 2)
            printf("%d %d %d\n", spot + 1, puff + 1, yertle);
        else if(s + p == y)
            printf("%d %d %d\n", spot + 1, puff, yertle);
        else
            printf("%d %d %d\n", spot, puff + 1, yertle);
    }
    return 0;
}
