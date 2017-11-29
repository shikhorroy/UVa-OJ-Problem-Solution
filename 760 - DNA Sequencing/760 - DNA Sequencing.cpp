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

#define MAX 310
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

int L[MAX][MAX], m, n;

int lcs_compute(string X, string Y)
{
    int maxv = 0;
    REP(i, 0, m)
    REP(j, 0, n)
    {
        if(i == 0 || j == 0) L[i][j] = 0;
        else if(X[i - 1] == Y[j - 1])
        {
            L[i][j] = L[i-1][j-1] + 1;
            if(L[i][j] > maxv)   maxv = L[i][j];
        }
        else    L[i][j] = 0;
    }
    return maxv;
}
int main()
{
//    READ("input.txt");
//    READ("discussion.txt");
    string Xstr, Ystr;
    bool isNew = false;
    while(getline(cin,Xstr))
    {
        getline(cin, Ystr); getchar();
        if(isNew) pf("\n"); isNew = true;

        m = Xstr.length(), n = Ystr.length();
        int maxv = lcs_compute(Xstr, Ystr);
        if(maxv == 0){
            puts("No common sequence.");
            continue;
        }
        vector <string> vec;
        REP(i, 0, m - 1)
        REP(j, 0, n - 1)
        if(L[i + 1][j + 1] == maxv)
        vec.pb(Ystr.substr(j + 1 - maxv, maxv));

        sort(vec.begin(), vec.end());

        int l = vec.sz;
        cout<<vec[0]<<endl;
        REP(i, 1, l - 1)
        if(vec[i] != vec[i-1])
        cout<<vec[i]<<endl;
    }
    return 0;
}
