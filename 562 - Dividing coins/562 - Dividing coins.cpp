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

#define mxcoin 101
#define mxmoney 50001
int bag[mxcoin][mxmoney], coins[mxcoin];

int knapsack(int m, int sum)
{
    for (int i = 0; i <= sum; i++)
    {
        bag[0][i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if(j >= coins[i])
                bag[i][j] = max(bag[i - 1][j], bag[i - 1][j - coins[i]] + coins[i]);
            else
                bag[i][j] = bag[i - 1][j];
        }
    }
    return bag[m][sum];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("DC.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int cnum, m;
    sf("%d", &cnum);
    for (int cs = 1; cs <= cnum; cs++)
    {
        int sum = 0;
        sf("%d", &m);
        for (int i = 1; i <= m; i++)
        {
            sf("%d", &coins[i]);
            sum += coins[i];
        }
        pf("%d\n", sum - (2 * knapsack(m, sum / 2)));
    }
    return 0;
}
