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
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

using namespace std;
int main()
{
    //READ("f1.txt");
    long long a,b,c,d,e,f,minv,i,cs=1;
    while(cin>>a>>b){
         minv = LONG_LONG_MAX;
        if(a==0 && b==0) return 0;
        for(i=0; i<a; i++)
        {
            cin>>c;
            if(c<minv) minv = c;
        }
        for(i=0; i<b; i++) cin>>c;
        cout<<"Case "<<cs++<<": ";
        if(a<=b) cout<<"0"<<endl;
        else cout<<a-b<<" "<<minv<<endl;
    }
    return 0;
}

