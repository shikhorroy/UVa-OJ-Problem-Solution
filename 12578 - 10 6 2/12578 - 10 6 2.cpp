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
#define sf scanf
#define pf printf
#define PI acos(-1.0)
int main()
{
    int tnum;
    sf("%d",&tnum);
    while(tnum--)
    {
        double L, W, R, rect_area, circle_area;
        sf("%lf",&L);
        W = (L * 3) / 5;
        R = L / 5;
        rect_area = (L * W);
        circle_area = (PI * R * R);
        pf("%.2lf %.2lf\n",circle_area,(rect_area - circle_area));
    }
    return 0;
}
