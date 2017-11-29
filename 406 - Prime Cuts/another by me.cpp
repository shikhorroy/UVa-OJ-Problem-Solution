#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>

using namespace std;
#define maxn 1010

vector<int>prime;
bool sieve[maxn];

int C, N;
int S, mid, first, last;
void sieve_method(){

    prime.push_back(1);
    prime.push_back(2);

    for(int i = 3;i <= maxn; i += 2) sieve[i] = true;

    const int limit = sqrt(maxn);

    for(int i = 3;i <= maxn; i += 2){
        if(sieve[i]){
            prime.push_back(i);
            if(i <= limit) for(int j = i * i; j <= maxn; j += i) sieve[j] = false;
        }
    }
}
int main()
{
    freopen("in.txt","r", stdin);
    int p;
    sieve_method();
    while(scanf("%d %d",&N,&C)!=EOF){
        for(p = 0;; p++){
            if(N == prime[p]) break;
            if(N < prime[p]){
                p--;
                break;
            }
        }
        mid = (p + 1) / 2;
        if(p % 2 == 0){
            S = ((C * 2) - 1);
            first = (mid - (S - C));
            last = (mid + (S - C));
        }
        else{
            first = (mid - C);
            last = (mid + C - 1);
        }
        printf("%d %d:",N,C);
        if(first < 0 || last > p)
            for(int j = 0; j <= p; j++)
                printf(" %d",prime[j]);
        else
            for(int j = first; j <= last; j++)
                printf(" %d",prime[j]);
        printf("\n\n");
    }
    return 0;
}
