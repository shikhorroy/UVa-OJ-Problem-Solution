#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define MAX 10002
int main()
{
    int x1, y1, x2, y2;
    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2))
    {
        if ( x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0 )
            return 0;
        if ( x1 == x2 && y1 == y2 )
            printf ("0\n");
        else if ( x1 == x2 || y1 == y2 )
            printf ("1\n");
        else if ( abs (x1 - x2) == abs (y1 - y2) )
            printf ("1\n");
        else
            printf ("2\n");
    }
    return 0;
}
