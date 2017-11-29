#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define MAX 30005
#define pf printf
#define sf scanf
#define llu unsigned long long int
long long nways[MAX] = {1};
float dollers[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
void coin_change()
{
    for(int i = 0; i < 11; i++)
    {
        int x = dollers[i];
        for(int j = x; j < MAX; j++)
            nways[j] += nways[j - x];
    }
}
int main()
{
//    freopen("input.in", "r", stdin);
    int d1, d2;
    coin_change();
    while(sf("%d.%d", &d1, &d2))
    {
        int r = (d1 * 100) + d2;
        if(r == 0) return 0;
        printf("%6.2f%17lld\n", r / 100.0, nways[r]);
    }
    return 0;
}
