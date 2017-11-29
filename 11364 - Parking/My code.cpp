#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x, min, max, i, t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
        n--;
        min = max = x;
        while(n--){
            scanf("%d",&x);
            if(x > max) max = x;
            else if(x < min) min = x;
        }
        printf("%d\n",(max - min)*2);
    }
    return 0;
}
