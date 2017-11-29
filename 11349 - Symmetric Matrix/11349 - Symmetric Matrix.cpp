/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge: UVa
     Problem name: 11349 - Symmetric Matrix
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
    freopen("SM.txt", "r", stdin);
#endif // ONLINE_JUDGE
#define mxn 105
    long long mat[mxn][mxn];
    int cnum;
    sf("%d", &cnum);
    for (int cs = 1; cs <= cnum; cs++)
    {
        int n;
        sf("\n%*c = %d", &n);

        long long x;
        bool isNeg = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sf("%lld", &x);
                if (x < 0) isNeg = true;
                mat[i][j] = x;
            }
        }

        pf("Test #%d: ", cs);

        if (isNeg)
            pf("Non-symmetric.");
        else
        {
            int flag = true;
            for (int i = 0, loop = (n + 1) / 2; i < loop; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (mat[i][j] != mat[n - i - 1][n - j - 1]){
                        flag = false;
                        i = j = mxn;
                    }
                }
            }
            if (flag)
                pf("Symmetric.");
            else
                pf("Non-symmetric.");
        }
        pf("\n");
    }
    return 0;
}
