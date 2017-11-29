/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge:
     Problem name:
     Imp. Algorithm:
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define DEBUG1(x) cout << "> " << #x << ": " << x << endl
#define DEBUG2(x, y) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << endl
#define DEBUG3(x, y, z) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << " > " << #z << ": " << z << endl

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE
    long long n;
    int cnum; sf ("%d", &cnum);
    for (int cs = 1; cs <= cnum; cs++)
    {
        sf ("%lld", &n);
        long long ans = 0.5 * (sqrt(1 + 8.0 * n) - 1.0);
        pf ("%lld\n", ans);
    }
    return 0;
}

