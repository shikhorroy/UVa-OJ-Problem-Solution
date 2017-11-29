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

#define MAX 1005
#define PI acos(-1.0)
#define REP(i, b, e)\
for(int i = b; i <= e; i++)
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

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <ii> vii;
int T, N;
string str;
int main()
{
    READ("in.txt");
    si(T);
    REP(i, 1, T)
    {
        si(N);
        getchar();
        getline(cin, str);
        map <char, int> mci;
        REP(j, 0, N - 1)
        mci[str[j]]++;
        pf("Case %d: ",i);
        if(mci['A'] == N) pf("ABANDONED\n");
        else if(mci['B'] == mci['W']) pf("DRAW %d %d\n",mci['B'], mci['T']);
        else if (mci['B'] == N || mci['B'] + mci['A'] == N) pf("BANGLAWASH\n");
        else if (mci['W'] == N || mci['W'] + mci['A'] == N) pf("WHITEWASH\n");
        else if (mci['B'] > mci['W']) pf("BANGLADESH %d - %d\n", mci['B'], mci['W']);
        else if (mci['B'] < mci['W']) pf("WWW %d - %d\n", mci['W'], mci['B']);
    }
    return 0;
}
