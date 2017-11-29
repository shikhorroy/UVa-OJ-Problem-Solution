#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int func(int n){
    int x;
    map <int, int>m;
    while(n){
        x = n % 10;
        n = n / 10;
        m[x]++;
        if(m[x] == 2)   return 0;
    }
    return 1;
}
int main()
{
    int m, n;
    while(scanf("%d%d",&m,&n) != EOF){
        int count = 0;
        for(int i = m; i <= n; i++){
            if(func(i)){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
