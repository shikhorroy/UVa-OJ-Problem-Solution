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

int n;
string ans[] =
{
    "0 i, 0 v, 0 x, 0 l, 0 c",
    "1 i, 0 v, 0 x, 0 l, 0 c",
    "3 i, 0 v, 0 x, 0 l, 0 c",
    "6 i, 0 v, 0 x, 0 l, 0 c",
    "7 i, 1 v, 0 x, 0 l, 0 c",
    "7 i, 2 v, 0 x, 0 l, 0 c",
    "8 i, 3 v, 0 x, 0 l, 0 c",
    "10 i, 4 v, 0 x, 0 l, 0 c",
    "13 i, 5 v, 0 x, 0 l, 0 c",
    "14 i, 5 v, 1 x, 0 l, 0 c",
    "14 i, 5 v, 2 x, 0 l, 0 c",
    "15 i, 5 v, 3 x, 0 l, 0 c",
    "17 i, 5 v, 4 x, 0 l, 0 c",
    "20 i, 5 v, 5 x, 0 l, 0 c",
    "21 i, 6 v, 6 x, 0 l, 0 c",
    "21 i, 7 v, 7 x, 0 l, 0 c",
    "22 i, 8 v, 8 x, 0 l, 0 c",
    "24 i, 9 v, 9 x, 0 l, 0 c",
    "27 i, 10 v, 10 x, 0 l, 0 c",
    "28 i, 10 v, 12 x, 0 l, 0 c",
    "28 i, 10 v, 14 x, 0 l, 0 c",
    "29 i, 10 v, 16 x, 0 l, 0 c",
    "31 i, 10 v, 18 x, 0 l, 0 c",
    "34 i, 10 v, 20 x, 0 l, 0 c",
    "35 i, 11 v, 22 x, 0 l, 0 c",
    "35 i, 12 v, 24 x, 0 l, 0 c",
    "36 i, 13 v, 26 x, 0 l, 0 c",
    "38 i, 14 v, 28 x, 0 l, 0 c",
    "41 i, 15 v, 30 x, 0 l, 0 c",
    "42 i, 15 v, 33 x, 0 l, 0 c",
    "42 i, 15 v, 36 x, 0 l, 0 c",
    "43 i, 15 v, 39 x, 0 l, 0 c",
    "45 i, 15 v, 42 x, 0 l, 0 c",
    "48 i, 15 v, 45 x, 0 l, 0 c",
    "49 i, 16 v, 48 x, 0 l, 0 c",
    "49 i, 17 v, 51 x, 0 l, 0 c",
    "50 i, 18 v, 54 x, 0 l, 0 c",
    "52 i, 19 v, 57 x, 0 l, 0 c",
    "55 i, 20 v, 60 x, 0 l, 0 c",
    "56 i, 20 v, 64 x, 0 l, 0 c",
    "56 i, 20 v, 65 x, 1 l, 0 c",
    "57 i, 20 v, 66 x, 2 l, 0 c",
    "59 i, 20 v, 67 x, 3 l, 0 c",
    "62 i, 20 v, 68 x, 4 l, 0 c",
    "63 i, 21 v, 69 x, 5 l, 0 c",
    "63 i, 22 v, 70 x, 6 l, 0 c",
    "64 i, 23 v, 71 x, 7 l, 0 c",
    "66 i, 24 v, 72 x, 8 l, 0 c",
    "69 i, 25 v, 73 x, 9 l, 0 c",
    "70 i, 25 v, 75 x, 10 l, 0 c",
    "70 i, 25 v, 75 x, 11 l, 0 c",
    "71 i, 25 v, 75 x, 12 l, 0 c",
    "73 i, 25 v, 75 x, 13 l, 0 c",
    "76 i, 25 v, 75 x, 14 l, 0 c",
    "77 i, 26 v, 75 x, 15 l, 0 c",
    "77 i, 27 v, 75 x, 16 l, 0 c",
    "78 i, 28 v, 75 x, 17 l, 0 c",
    "80 i, 29 v, 75 x, 18 l, 0 c",
    "83 i, 30 v, 75 x, 19 l, 0 c",
    "84 i, 30 v, 76 x, 20 l, 0 c",
    "84 i, 30 v, 77 x, 21 l, 0 c",
    "85 i, 30 v, 78 x, 22 l, 0 c",
    "87 i, 30 v, 79 x, 23 l, 0 c",
    "90 i, 30 v, 80 x, 24 l, 0 c",
    "91 i, 31 v, 81 x, 25 l, 0 c",
    "91 i, 32 v, 82 x, 26 l, 0 c",
    "92 i, 33 v, 83 x, 27 l, 0 c",
    "94 i, 34 v, 84 x, 28 l, 0 c",
    "97 i, 35 v, 85 x, 29 l, 0 c",
    "98 i, 35 v, 87 x, 30 l, 0 c",
    "98 i, 35 v, 89 x, 31 l, 0 c",
    "99 i, 35 v, 91 x, 32 l, 0 c",
    "101 i, 35 v, 93 x, 33 l, 0 c",
    "104 i, 35 v, 95 x, 34 l, 0 c",
    "105 i, 36 v, 97 x, 35 l, 0 c",
    "105 i, 37 v, 99 x, 36 l, 0 c",
    "106 i, 38 v, 101 x, 37 l, 0 c",
    "108 i, 39 v, 103 x, 38 l, 0 c",
    "111 i, 40 v, 105 x, 39 l, 0 c",
    "112 i, 40 v, 108 x, 40 l, 0 c",
    "112 i, 40 v, 111 x, 41 l, 0 c",
    "113 i, 40 v, 114 x, 42 l, 0 c",
    "115 i, 40 v, 117 x, 43 l, 0 c",
    "118 i, 40 v, 120 x, 44 l, 0 c",
    "119 i, 41 v, 123 x, 45 l, 0 c",
    "119 i, 42 v, 126 x, 46 l, 0 c",
    "120 i, 43 v, 129 x, 47 l, 0 c",
    "122 i, 44 v, 132 x, 48 l, 0 c",
    "125 i, 45 v, 135 x, 49 l, 0 c",
    "126 i, 45 v, 139 x, 50 l, 0 c",
    "126 i, 45 v, 140 x, 50 l, 1 c",
    "127 i, 45 v, 141 x, 50 l, 2 c",
    "129 i, 45 v, 142 x, 50 l, 3 c",
    "132 i, 45 v, 143 x, 50 l, 4 c",
    "133 i, 46 v, 144 x, 50 l, 5 c",
    "133 i, 47 v, 145 x, 50 l, 6 c",
    "134 i, 48 v, 146 x, 50 l, 7 c",
    "136 i, 49 v, 147 x, 50 l, 8 c",
    "139 i, 50 v, 148 x, 50 l, 9 c",
    "140 i, 50 v, 150 x, 50 l, 10 c",
    "140 i, 50 v, 150 x, 50 l, 11 c"
};
int main()
{
//    READ("in.in");
//    WRITE("out.out");
//    double cl = clock();

    while(sf("%d", &n), n) pf("%d: %s\n", n, ans[n].c_str());

//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
