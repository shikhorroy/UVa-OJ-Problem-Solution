/******************Joy Krishna****************
*    Online Judge: UVa OJ
*    Problem Name: 12754 - Display Problem
*Problem Category: Ad Hoc or string matching
*Coder: Shikhor Roy(CSE - 2012, HSTU).
*********************************************/
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
typedef vector<pii> vii;
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
string LED[30];
int main()
{
    READ("in.in");
//    double cl = clock();
    TEST
    {
        int index  = 0;
        string inStr;
        while(cin >> inStr)
        {
            if(inStr == "*") break;
            LED[index++] = inStr;
        }
        bool flag = true;
        int nRows = index, nCols = LED[0].ln, twoD = (nRows - 3), D = twoD / 2;
        if(D < 0) flag = false;
        else if(twoD % 2 || (twoD % 2 == 0 && nCols != (D + 2))) flag = false;
        else
        {
            if(LED[0][0] != '.' || LED[0][nCols - 1] != '.') flag = false;

            if(LED[nRows - 1][0] != '.' || LED[nRows - 1][nCols - 1] != '.') flag = false;

            if(LED[nRows/2][0] != '.' || LED[nRows/2][nCols - 1] != '.') flag = false;

            if(flag) for(int i = 1; i < nCols - 1; i++)
            {
                if(LED[0][i] != '-' || LED[nRows - 1][i] != '-' || LED[nRows/2][i] != '-')
                {
                    flag = false; break;
                }
            }
            bool terminate = true;
            if(flag) for(int i = 1; i < nRows - 1 && terminate; i++)
            {
                if(i != nRows / 2) for(int j = 1; j < nCols - 1; j++)
                {
                    if(LED[i][0] != '|' || LED[i][nCols - 1] != '|'){
                        flag = false; terminate = false;
                        break;
                    }
                    if(LED[i][j] != '.'){
                        flag = false; terminate = false;
                        break;
                    }
                }
            }
        }
        if(flag) pf("Case %d: %d\n", cs, D);
        else pf("Case %d: Bad\n", cs);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
