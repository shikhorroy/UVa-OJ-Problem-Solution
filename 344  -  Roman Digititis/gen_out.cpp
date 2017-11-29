/****************** Krishna *******************
*---------Online Judge:
*---------Problem Name:
*-----Problem Category:
*-Algorithm Complexity:
*-----Coder: Shikhor Roy(CSE - 2012, HSTU).
***********************************************/
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>
#include<ctime>

#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<utility>
#include<sstream>
#include<bitset>
#include<algorithm>
using namespace std;

#define EPS 1E-4
#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii > vpii;
typedef map<string, int> msi;
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
#define out(x) cout<< (x) << endl
#define out2(x, y) cout<< (x) << " " << (y) << endl
#define out3(x, y, z) cout<< (x) << " " << (y) << " " << (z) << endl
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int romans[][5] =
{
//   i  v  x  l  c
    {0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0},
    {2, 0, 0, 0, 0},
    {3, 0, 0, 0, 0},
    {1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {1, 1, 0, 0, 0},
    {2, 1, 0, 0, 0},
    {3, 1, 0, 0, 0},
    {1, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 0, 1, 0, 0},
    {2, 0, 1, 0, 0},
    {3, 0, 1, 0, 0},
    {1, 1, 1, 0, 0},
    {0, 1, 1, 0, 0},
    {1, 1, 1, 0, 0},
    {2, 1, 1, 0, 0},
    {3, 1, 1, 0, 0},
    {1, 0, 2, 0, 0},
    {0, 0, 2, 0, 0},
    {1, 0, 2, 0, 0},
    {2, 0, 2, 0, 0},
    {3, 0, 2, 0, 0},
    {1, 1, 2, 0, 0},
    {0, 1, 2, 0, 0},
    {1, 1, 2, 0, 0},
    {2, 1, 2, 0, 0},
    {3, 1, 2, 0, 0},
    {1, 0, 3, 0, 0},
    {0, 0, 3, 0, 0},
    {1, 0, 3, 0, 0},
    {2, 0, 3, 0, 0},
    {3, 0, 3, 0, 0},
    {1, 1, 3, 0, 0},
    {0, 1, 3, 0, 0},
    {1, 1, 3, 0, 0},
    {2, 1, 3, 0, 0},
    {3, 1, 3, 0, 0},
    {1, 0, 4, 0, 0},
    {0, 0, 1, 1, 0},
    {1, 0, 1, 1, 0},
    {2, 0, 1, 1, 0},
    {3, 0, 1, 1, 0},
    {1, 1, 1, 1, 0},
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 0},
    {2, 1, 1, 1, 0},
    {3, 1, 1, 1, 0},
    {1, 0, 2, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 0, 0, 1, 0},
    {2, 0, 0, 1, 0},
    {3, 0, 0, 1, 0},
    {1, 1, 0, 1, 0},
    {0, 1, 0, 1, 0},
    {1, 1, 0, 1, 0},
    {2, 1, 0, 1, 0},
    {3, 1, 0, 1, 0},
    {1, 0, 1, 1, 0},
    {0, 0, 1, 1, 0},
    {1, 0, 1, 1, 0},
    {2, 0, 1, 1, 0},
    {3, 0, 1, 1, 0},
    {1, 1, 1, 1, 0},
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 0},
    {2, 1, 1, 1, 0},
    {3, 1, 1, 1, 0},
    {1, 0, 2, 1, 0},
    {0, 0, 2, 1, 0},
    {1, 0, 2, 1, 0},
    {2, 0, 2, 1, 0},
    {3, 0, 2, 1, 0},
    {1, 1, 2, 1, 0},
    {0, 1, 2, 1, 0},
    {1, 1, 2, 1, 0},
    {2, 1, 2, 1, 0},
    {3, 1, 2, 1, 0},
    {1, 0, 3, 1, 0},
    {0, 0, 3, 1, 0},
    {1, 0, 3, 1, 0},
    {2, 0, 3, 1, 0},
    {3, 0, 3, 1, 0},
    {1, 1, 3, 1, 0},
    {0, 1, 3, 1, 0},
    {1, 1, 3, 1, 0},
    {2, 1, 3, 1, 0},
    {3, 1, 3, 1, 0},
    {1, 0, 4, 1, 0},
    {0, 0, 1, 0, 1},
    {1, 0, 1, 0, 1},
    {2, 0, 1, 0, 1},
    {3, 0, 1, 0, 1},
    {1, 1, 1, 0, 1},
    {0, 1, 1, 0, 1},
    {1, 1, 1, 0, 1},
    {2, 1, 1, 0, 1},
    {3, 1, 1, 0, 1},
    {1, 0, 2, 0, 1},
    {0, 0, 0, 0, 1}
};

int main()
{
//    READ("in.in");
    WRITE("output.out");
//    double cl = clock();
    int n, ans[101][5] = {0};
    for(int i = 1; i <= 100; i++)
    {
        ans[i][0] = ans[i - 1][0] + romans[i][0],
        ans[i][1] = ans[i - 1][1] + romans[i][1],
        ans[i][2] = ans[i - 1][2] + romans[i][2],
        ans[i][3] = ans[i - 1][3] + romans[i][3],
        ans[i][4] = ans[i - 1][4] + romans[i][4];
        pf("\"%d i, %d v, %d x, %d l, %d c\",\n", ans[i][0], ans[i][1], ans[i][2], ans[i][3], ans[i][4]);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
