#include<cstdio>
#define sf scanf
#define pf printf
int main()
{
    int pd, pm, py, bd, bm, by, t;
    sf("%d",&t);
    for(int i = 1; i <= t; i++){
        sf("%d/%d/%d",&pd,&pm,&py);
        sf("%d/%d/%d",&bd,&bm,&by);
        int dif = py - by;

        if(bm > pm) dif--;
        else if((bm == pm) && (bd > pd))    dif--;

        if(dif < 0) pf("Case #%d: Invalid birth date\n",i);
        else if(dif > 130)  pf("Case #%d: Check birth date\n",i);
        else    pf("Case #%d: %d\n",i,dif);
    }
    return 0;
}
