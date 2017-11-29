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

#define MAX 100
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
int func(int x)
{
    if(x % 2 == 0 && x % 4 == 0)
        return x;
    if(x % 2 == 0 && x % 4 != 0)
        return (x + 2);
    return (x + 1);
}
int main()
{
//    READ("696 - How Many Knights.txt");
    int m, n;
    while(sf("%d %d", &m, &n))
    {
        if(m == 0 && n == 0) break;
        int ans;
        if(m == 1 || n == 1) ans = (m * n);
        else if(m == 2) ans = func(n);
        else if(n == 2) ans = func(m);
        else ans = (m * n + 1) / 2;
        pf("%d knights may be placed on a %d row %d column board.\n", ans, m, n);
    }
    return 0;
}
