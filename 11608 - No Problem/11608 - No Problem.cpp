#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 12
int main(){
    int store[MAX], n, need, start, total, cs = 0;
    while(scanf("%d",&start), start >= 0){
        total = start;
        for(int i = 0; i < MAX; i++) scanf("%d",&store[i]);
        printf("Case %d:\n",++cs);
        need = 0;
        for(int i = 0; i < MAX; i++){
            scanf("%d",&n);
            need += n;
            if(i)   total += store[i-1];
            if(total >= need)    printf("No problem! :D\n");
            else{
                printf("No problem. :(\n");
                need -= n;
            }
        }
    }
    return 0;
}
