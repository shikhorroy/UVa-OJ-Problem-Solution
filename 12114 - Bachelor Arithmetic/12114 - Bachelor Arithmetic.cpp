#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <list>
#include <set>
#include <utility>
#include <sstream>
#include<iomanip>

#define PI acos(-1.0)
#define MAX 10000007
#define int64 long long
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define READ(f) freopen(f, "r", stdin)

using namespace std;
int main()
{
    long b, s, cs = 0;
    while(cin>>b>>s){
        if(b == 0 && s == 0) break;
        cout<<"Case "<<(++cs)<<": ";
        if(b == 1) cout<<":-\\"<<endl;
        else if(b > s) cout<<":-("<<endl;
        else cout<<":-|"<<endl;
    }
    return 0;
}

