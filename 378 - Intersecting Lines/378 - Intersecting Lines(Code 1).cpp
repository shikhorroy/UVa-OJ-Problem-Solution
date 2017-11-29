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

int area(ii p1, ii p2, ii p3)
{
    return ((p3.y - p1.y) * (p2.x - p1.x) - (p3.x - p1.x) * (p2.y - p1.y));
}
int main()
{
//    READ("input.txt");

    int cnum;
    si(cnum);
    puts("INTERSECTING LINES OUTPUT");
    while(cnum--)
    {
        double x1, y1, x2, y2, x3, y3, x4, y4;

        sf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        ii p1 = mp(x1, y1), p2 = mp(x2, y2), p3 = mp(x3, y3), p4 = mp(x4, y4);
        if(area(p1, p2, p2) == 0 && area(p1, p2, p4) == 0)
        {
            puts("LINE");
            continue;
        }

        double A1 = y2 - y1;
        double B1 = x1 - x2;
        double C1 = A1 * x1 + B1 * y1;
        double A2 = y4 - y3;
        double B2 = x3 - x4;
        double C2 = A2 * x3 + B2 * y3;

        double det = A1 * B2 - A2 * B1;

        if(det == 0)
            puts("NONE");
        else{
            double x, y;
            x = (B2 * C1 - B1 * C2) / det;
            y = (A1 * C2 - A2 * C1) / det;
            pf("POINT %.2lf %.2lf\n", x, y);
        }
    }
    puts("END OF OUTPUT");

    return 0;
}
