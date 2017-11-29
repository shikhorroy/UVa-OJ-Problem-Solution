#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double H, U, D, F;
    int days;
    while(cin >>H>>U>>D>>F && H != 0)
    {
        days = 0;
        double climbed = 0;
        double factor = (F * U) / 100.;
        while(true)
        {
            days++;
            if(U > 0)   climbed += U;
            U -= factor;
            if(climbed > H) break;
            climbed -= D;
            if(climbed < 0) break;
        }
        if(climbed > H) printf("success on day %d\n", days);
        else printf("failure on day %d\n", days);
    }
    return 0;
}
