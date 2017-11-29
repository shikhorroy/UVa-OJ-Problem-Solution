#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>

using namespace std;
#define MAX 1000001

bool flag[MAX];
vector<int>primes;
const int LIMIT = sqrt(MAX) + 1;

void sieve_method(){
    primes.push_back(0);
    primes.push_back(2);

    for(int i = 3; i < MAX; i += 2) flag[i] = true;

    for(int i = 3; i < MAX; i += 2){
        if(flag[i]){
            primes.push_back(i);
            if(i < LIMIT) for(int j = i*i; j < MAX; j += i) flag[j] = false;
        }
    }
}
int main(){
    int n;
    sieve_method();

    while(scanf("%d",&n), n != 0){
        bool yes = true;
        for(int i = 1;;i++){
            if(primes[i] > n) break;
            int x = n - primes[i];
            if(flag[x]){
                printf("%d = %d + %d\n",n,primes[i],n-primes[i]);
                yes = false;
                break;
            }
        }
        if(yes) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
