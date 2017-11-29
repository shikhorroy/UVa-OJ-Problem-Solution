using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define FREAD(f) freopen(f, "r", stdin)
#define FWRITE(f) freopen(f, "w", stdout)

#define DEBUG1(x) cout << "> " << #x << ": " << x << endl
#define DEBUG2(x, y) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << endl
#define DEBUG3(x, y, z) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << " > " << #z << ": " << z << endl

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/

int findAns(int n, int m, int k)
{
    int seq = 0;
    int x = 0, kTimes = 0, factor = 1;
    while(kTimes != k)
    {
        x++;
        seq += factor;

        if (seq == m)
        {
            int v = x;
            bool flag = false;
            if (x % 7 == 0) flag = true;
            else while(v) if (v % 10 == 7)
                    {
                        flag = true;
                        break;
                    }
                    else v /= 10;
            if (flag) kTimes++;
        }
        if (seq == 1) factor = 1;
        else if (seq == n) factor = -1;
    }
    return x;

}
int main()
{
//    FREAD("input.txt");
    int n, m, k;
    while(sf("%d %d %d", &n, &m, &k))
    {
        if (!n && !m && !k) break;
        pf("%d\n", findAns(n, m, k));
    }
    return 0;
}


