/******************Joy Krishna****************
*    Online Judge: UVa
*    Problem Name: 119 - GREEDY GIFT GIVER
*Problem Category: Ad Hoc
*Coder: Shikhor Roy(CSE - 2012, HSTU).
*********************************************/
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>
#include<ctime>

#include<fstream>
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

#define MAX 1000000001
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

#define sout std :: cout

int main()
{
//    READ("in.in");
//    double cl = clock();
    bool flag = false;
    int n, a, b, money;
    while(cin >> n)
    {
        msi persons;
        string name;
        vector<string> personNames;
        for(int i = 0; i < n; i++)
        {
            cin >> name;
            personNames.pb(name);
            persons[name] = 0;
        }
        msi initial;
        for(int i = 0; i < n; i++)
        {
            cin >> name >> a >> b;
            persons[name] += ((b == 0) ? a :  (a % b));
            initial[name] = a;

            for(int j = 0; j < b; j++)
            {
                cin >> name;
                persons[name] += (a / b);
            }
        }
        if(flag) puts(""); flag = true;
        int l = personNames.sz;
        for(int i = 0; i < l; i ++)
        {
            cout << personNames[i] << " " << persons[personNames[i]] - initial[personNames[i]] << endl;
        }
    }

//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}

