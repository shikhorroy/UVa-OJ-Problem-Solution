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

void roman_numbers(int n)
{
    int i, v, x, l, c;
    i = v = x = l = c = 0;

    if(n == 100) {c++; n = 0;}
    if(n >= 90 && n <= 99) { c++; x++; n = n - 90; }
    if(n >= 80 && n <= 89) { l++; x += 3; n = n - 80; }

    if(n >= 50) { l++; n = n - 50; }
    if(n >= 40 && n <= 49) { l++; x++; n = n - 40; }
    if(n >= 30 && n <= 39) {x += 3; n = n - 30;}
    if(n >= 20 && n <= 29) {x += 2; n = n - 20;}
    if(n >= 10){ x++; n = n - 10; }
    if(n == 9) { x++; i++; n = 0; }
    if(n >= 5) { v++; n = n - 5; }
    if(n == 4) { v++; i++; n = 0; }
    if(n == 3) { i += 3; n = 0; }
    if(n == 2) { i += 2; n = 0; }
    if(n == 1) { i++; n = 0; }

    pf("{%d, %d, %d, %d, %d},\n", i, v, x, l, c);
}
int main()
{
//    READ("in.in");
    WRITE("out.out");
//    double cl = clock();
    int n;
    for(int i = 1; i <= 100; i++)
    {
        roman_numbers(i);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
