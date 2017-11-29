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
#define MAX 1000000002
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

int main()
{
    READ("in.in");
//    WRITE("out.out");
//    double cl = clock();
    int n;
    while(sf("%d", &n) && n)
    {
        char num1[10];
        int length = 1;
        sprintf(num1, "%d", n);

        pf("Original number was %d\n", n);

        sort(num1, num1 + strlen(num1));
        char num2[10];
        strcpy(num2, num1);
        reverse(num2, num2 + strlen(num2));

        int first = atoi(num1), second = atoi(num2);
        int sub = second - first;

        pf("%d - %d = %d\n", second, first, sub);

        map<int, bool> m;
        while(m[sub] == false)
        {
            m[sub] = true;

            sprintf(num1, "%d", sub);

            sort(num1, num1 + strlen(num1));
            strcpy(num2, num1);
            reverse(num2, num2 + strlen(num2));

            first = atoi(num1), second = atoi(num2);
            sub = second - first;

            pf("%d - %d = %d\n", second, first, sub);

            length++;
        }
        pf("Chain length %d\n\n", length);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
