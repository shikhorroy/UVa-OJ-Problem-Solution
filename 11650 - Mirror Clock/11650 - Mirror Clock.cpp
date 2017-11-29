#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int T, h, m, H, M;
    scanf("%d",&T);
    while(T--){
        scanf("%d:%d",&h,&m);
        H = 12 - ((h == 12) ? 0 : h);
        M = 60 - ((m == 0) ? 60 : m);
        if(m)   H--;
        if(H == 0)  H = 12;
        printf("%02d:%02d\n",H,M);
    }
    return 0;
}
