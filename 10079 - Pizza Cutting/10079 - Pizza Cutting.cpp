#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    long long n;
    while(scanf("%lld",&n), !(n < 0)){
        long long result = (n*(n+1))/2+1;
        printf("%lld\n",result);
    }
    return 0;
}
