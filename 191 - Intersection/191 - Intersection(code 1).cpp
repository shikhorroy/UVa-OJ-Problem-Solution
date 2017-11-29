#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include<iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

using namespace std;

#define MAX 25
#define PI acos(-1.0)

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <string, int> msi;

#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define in(x) cin>>x
#define out(x) cout<<(x)
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define x first
#define y second

int area(ii p1, ii p2,ii p3)
{
    int res = (p3.y - p1.y) * (p2.x - p1.x) - (p3.x - p1.x) * (p2.y - p1.y);
    return (res == 0) ? 0 : (res > 0) ? 1 : -1;
}
bool onSigment(ii p1, ii p2,ii p3)
{
    return (p3.x >= min(p1.x, p2.x) && p3.x <= max(p1.x, p2.x) && p3.y >= min(p1.y, p2.y) && p3.y <= max(p1.y, p2.y));
}
bool isInside_rect(int xstart, int ystart, int xend, int yend,  int xleft, int ytop, int xright, int ybottom)
{
    return (xstart >= min(xleft, xright) && xstart <= max(xleft, xright) && ystart >= min(ybottom, ytop) && ystart <= max(ybottom, ytop) ||
    xend >= min(xleft, xright) && xend <= max(xleft, xright) && yend >= min(ybottom, ytop) && yend <= max(ybottom, ytop)
           );
}
int main()
{
//    READ("input.txt");
    int n;
    int xstart, ystart, xend, yend, xleft, ytop, xright, ybottom;
    si(n);
    while(n--)
    {
        sf("%d %d %d %d %d %d %d %d", &xstart, &ystart, &xend, &yend, &xleft, &ytop, &xright, &ybottom);

        ii lineA = mp(xstart, ystart), lineB = mp(xend, yend);
        ii rectW = mp(xleft, ytop), rectX = mp(xright, ytop), rectY = mp(xright, ybottom), rectZ = mp(xleft, ybottom);

        if(isInside_rect(xstart, ystart, xend, yend, xleft, ytop, xright, ybottom))
        {
            puts("T");
            continue;
        }

        int wxa = area(rectW, rectX, lineA);
        int wxb = area(rectW, rectX, lineB);
        int xya = area(rectX, rectY, lineA);
        int xyb = area(rectX, rectY, lineB);
        int yza = area(rectY, rectZ, lineA);
        int yzb = area(rectY, rectZ, lineB);
        int zxa = area(rectZ, rectX, lineA);
        int zxb = area(rectZ, rectX, lineB);

        int abw = area(lineA, lineB, rectW);
        int abx = area(lineA, lineB, rectX);
        int aby = area(lineA, lineB, rectY);
        int abz = area(lineA, lineB, rectZ);

        if(
            wxa == 0 && onSigment(rectW, rectX, lineA) ||
            wxb == 0 && onSigment(rectW, rectX, lineB) ||
            xya == 0 && onSigment(rectX, rectY, lineA) ||
            xyb == 0 && onSigment(rectX, rectY, lineB) ||
            yza == 0 && onSigment(rectY, rectZ, lineA) ||
            yzb == 0 && onSigment(rectY, rectZ, lineB) ||
            zxa == 0 && onSigment(rectZ, rectX, lineA) ||
            zxb == 0 && onSigment(rectZ, rectX, lineB) ||
            abw == 0 && onSigment(lineA, lineB, rectW) ||
            abx == 0 && onSigment(lineA, lineB, rectX) ||
            aby == 0 && onSigment(lineA, lineB, rectY) ||
            abz == 0 && onSigment(lineA, lineB, rectZ)
        )
            puts("T");
        else if(
            wxa * wxb < 0 && abw * abx < 0 ||
            xya * xyb < 0 && abx * aby < 0 ||
            yza * yzb < 0 && aby * abz < 0 ||
            zxa * zxb < 0 && abz * abx < 0
        )
            puts("T");
        else
            puts("F");
    }
    return 0;
}

