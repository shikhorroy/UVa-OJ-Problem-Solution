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
#define FOR(s,e) for(int i = s; i <= e; i++)
#define sf scanf
#define pf printf
#define MAX 10002
int main()
{
    int T;
    int R, length, width;
    int up, down, left, right;
    sf("%d",&T);
    int cs = 0;
    while(T--)
    {
        sf("%d",&R);
        length = (R * 5);
        width = (length * 3) / 5;
        up = down = width / 2;
        left = (length * 45) / 100;
        right = length - left;
        pf("Case %d:\n",++cs);
        pf("-%d %d\n",left,up);
        pf("%d %d\n",right,up);
        pf("%d -%d\n",right,down);
        pf("-%d -%d\n",left,down);
    }
    return 0;
}
