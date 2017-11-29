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

#define RASA

int main()
{
#ifndef RASA
    FREAD("input.txt");
    FWRITE("output.txt");
#endif // RASA

    long long a, b;
    double n;
    while(sf("%lld %lld", &a, &b) == 2)
    {
        sf("%lf", &n);
        long double aByb = (long double)a / b;
        for (long long d = 1;; d++)
        {
            long long c = (aByb * d);
            while(a * d >= c * b) c++;
            long double cByd = (long double)c / d;
            if (cByd - aByb <= n)
            {
                pf("%lld %lld\n", c, d);
                break;
            }
        }
    }

    return 0;
}

