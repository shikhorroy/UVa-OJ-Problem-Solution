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
#define ff first
#define ss second

int intersect[MAX];
vector < pair <ii, ii > > store;

int area(ii p1, ii p2, ii p3)
{
    return ((p3.ss - p1.ss) * (p2.ff - p1.ff) - (p3.ff - p1.ff) * (p2.ss - p1.ss));
}
bool isIntersect(int line1, int line2)
{
    ii lineA = store[line1].ff, lineB = store[line1].ss;
    ii lineP = store[line2].ff, lineQ = store[line2].ss;
    if(area(lineA, lineB, lineP) * area(lineA, lineB, lineQ) < 0 && area(lineP, lineQ, lineA) * area(lineP, lineQ, lineB) < 0)
        return true;
    return false;
}

int times(int i, int n)
{
    int total = 0;
    REP(j, i+1, n-1)
    {
        if(isIntersect(i, j))
            total++, intersect[j]++;
    }
    return (total + intersect[i]);
}
int main()
{
//    READ("input.txt");
    int cnum; si(cnum);
    while(cnum--)
    {
        int n; si(n);
        REP(i, 1, n)
        {
            int x1, x2, y1, y2;
            sf("%d %d %d %d", &x1, &y1, &x2, &y2);
            store.pb(mp(mp(x1, y1), mp(x2, y2)));
        }

        REP(i, 0, n-1)
        intersect[i] = 0;

        int total_sig = 0;
        REP(i, 0, n-2)
            total_sig += (times(i, n) +1);
        total_sig += (intersect[n-1] + 1);

        pf("%d\n", total_sig);
        if(cnum)
            pf("\n");

        store.clr;
    }
    return 0;
}

