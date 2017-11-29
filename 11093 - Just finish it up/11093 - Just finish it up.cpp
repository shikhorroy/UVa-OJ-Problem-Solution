/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge: HUST(Long DS Contest 1)
     Problem name: A - Just Finish it up
     Imp. Algorithm: Array Manupulation, Complexity: O(n)
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define DEBUG1(x) pf("> %s: %d\n", #x, x)
#define DEBUG2(x, y) pf("> %s: %d > %s: %d\n", #x, x, #y, y)
#define DEBUG3(x, y, z) pf("> %s: %d > %s: %d > %s: %d\n", #x, x, #y, y, #z, z)

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("A.txt", "r", stdin);
#endif // ONLINE_JUDGE

#define mxn 100004
    int iArr[mxn], cnum;
    sf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        pf("Case %d: ", cs);
        int n, x, lack = 0, extra = 0;

        sf("%d", &n);
        for(int i = 0; i < n; i++) sf("%d", &iArr[i]);

        int station;
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            sf("%d", &x);

//            DEBUG1(x);
            extra = extra + iArr[i];
            if(x >= extra)
            {
                flag = true;
                lack += x - extra;
                extra = 0;
            }
            else
            {
                extra = extra - x;
                if(flag)
                {
                    station = i;
                    flag = false;
                }
            }

//            DEBUG2(extra, lack);
        }

        if(extra - lack >= 0 && !flag)
            pf("Possible from station %d\n", station + 1);
        else
            pf("Not possible\n");
    }
    return 0;
}
