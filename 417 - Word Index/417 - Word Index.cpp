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

#define MAX 105
#define PI acos(-1.0)

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <string, int> msi;

#define REP(i, b, e)\
    for(int i = b; i <= e; i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

msi M;
void generating_pos()
{
    queue <string> Q;
    for(char c = 'a'; c <= 'z'; c++)
        Q.push(string(1, c));
    string str;
    int cont = 1;
    while(true)
    {
        str = Q.front();
        Q.pop();
        M[str] = cont++;
        int l = str.sz;
        if(l == 5)
            break;
        for(char c = str[l - 1] + 1; c <= 'z'; c++)
            Q.push(str + c);
    }
    while(!Q.empty())
    {
        str = Q.front();
        Q.pop();
        M[str] = cont++;
    }
}
int main()
{
    generating_pos();
    string str;
    while(cin>>str)
    {
        if(M.find(str) == M.end())
            pf("0\n");
        else
            pf("%d\n",M[str]);
    }
    return 0;
}

