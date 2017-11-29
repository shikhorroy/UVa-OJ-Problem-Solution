#include<stdio.h>
#include<map>
using namespace std;
int is_happy(long long n){
    map<long long, int>flag;
    long long t = n, sum = 0, mod;
    while(1){
        if(n == 1)  return 2;
        flag[n] = 1;
        while(n){
            mod = n % 10;   n = n / 10;
            sum += (mod * mod);
        }
        n = sum; sum = 0;
        if(n == t)  return 1;
        if(flag[n] == 1)    return 1;
    }
}
int main()
{
    int cnum, i;
    long long num;
    scanf("%d",&cnum);
    for(i = 1; i <= cnum; i++){
        scanf("%lld",&num);
        if(is_happy(num) == 2) printf("Case #%d: %lld is a Happy number.\n",i, num);
        else    printf("Case #%d: %lld is an Unhappy number.\n",i, num);
    }
    return 0;
}
