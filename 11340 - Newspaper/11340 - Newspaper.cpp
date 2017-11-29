#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    long long tc, cn, l;
    scanf("%lld",&tc);
    while(tc--){
        scanf("%lld\n",&cn);
        long long cost[300] = {0}, cst;
        while(cn--){
            char ch;
            scanf("%c %lld\n",&ch,&cst);
            cost[ch+128] = cst;
        }
        scanf("%lld\n",&l);
        //printf("l = %d\n",l);
        long long cent = 0;
        while(l--){
            char ch;
            while(scanf("%c",&ch), ch != '\n'){
                cent += cost[ch+128];
            }
        }
        printf("%.2f$\n",(cent/100.0));
    }

    return 0;
}
