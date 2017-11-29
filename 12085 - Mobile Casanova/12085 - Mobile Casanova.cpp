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
void pr(long long a, long long b)
{
    if(a!=b)
    {
        pr(a/10,b/10);
        cout<<(b%10);
    }
}
int main()
{
    //READ("c1.txt");
    long long a,b,c,d,e,f,minv,i,cs=0,n, cnt;
    while(cin>>n)
    {
        vector<string>v;
        vector<int64>vi;
        if(n==0) return 0;

        cout<<"Case "<<(++cs)<<":"<<endl;
        cnt = 0;
        string str;

        for(int64 i = 0; i < n; i++)
        {
            cin>>str;
            v.push_back(str);
            stringstream ss(str);
            ss>>a;
            vi.push_back(a);
        }
        vi.push_back(-1);
        bool flag = true;
        int64 l = v.size();
        for(int64 i = 0; i < l; i++)
        {
            if(vi[(i+1)] - vi[i] == 1) cnt++;
            else
            {
                cout<<v[i-cnt];
                if(cnt)
                {
                    cout<<"-";
                    pr(vi[i-cnt],vi[i]);
                    cout<<endl;
                }
                else cout<<endl;
                cnt=0;
                flag = false;
            }
        }
        if(flag)
        {
            cout<<v[0];
            if(cnt)
            {
                cout<<"-";
                pr(vi[0],vi[l-1]);
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
