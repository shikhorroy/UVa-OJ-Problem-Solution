#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
#define ll long long int
#define FOR(s,e) for(int i = s; i <= e; i++)
#define sf scanf
#define pf printf
#define MAX 10002
int main()
{
    string Q;
    int t, n, k;
    char ch;
    sf("%d",&t);
    int cs = 0;
    while(t--)
    {
        int found;
        int count = 0;
        sf("%d %d%*c",&n,&k);
        if(k >= n)
        {
            for(int i = 1; i <= n; i++)
            {
                sf("%c",&ch);
                found = Q.find(ch);
                if(found != string::npos)
                    count++;
                Q += ch;
            }
            getchar();
            pf("Case %d: %d\n",++cs,count);
            Q.clear();
            continue;
        }
        int beg = 1, end = k;
        for(int i = beg; i <= end; i++)
        {
            sf("%c",&ch);
            found = Q.find(ch);
            if(found != string::npos)
                count++;
            Q += ch;
        }
        beg = end, end = n;

        for(int i = beg; i < end; i++)
        {
            sf("%c",&ch);
            found = Q.find(ch);
            if(found != string::npos)
                count++;
            Q +=  ch;
            Q.erase(0, 1);
        }
        getchar();
        pf("Case %d: %d\n",++cs,count);
        Q.clear();
    }
    return 0;
}

