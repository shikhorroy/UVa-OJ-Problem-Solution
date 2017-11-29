#include<stdio.h>
int main(){
    int n, k, butt, result;
    while(scanf("%d%d",&n,&k) != EOF){
        result = n;
        while(n >= k){
            butt = n/k;
            n = butt + (n%k);
            result += butt;
        }
        printf("%d\n",result);
    }
    return 0;
}
