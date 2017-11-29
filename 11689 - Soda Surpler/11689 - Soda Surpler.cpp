#include<iostream>
#include<cstdio>
using namespace std;
#define int64 long long
int main(){
    int N;
    scanf("%d",&N);
    while(N--){
        int e, f, c;
        scanf("%d%d%d",&e,&f,&c);
        int64 total = 0;
        e += f;
        while(e >= c){
            int x;
            total += (x = (e / c));
            e = x + (e % c);
        }
        printf("%lld\n",total);
    }
    return 0;
}
