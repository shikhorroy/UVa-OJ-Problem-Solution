#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    while(scanf("%d",&N) != EOF){
        int total = N, x;
        while(true)
        {
            total += (x = N / 3);
            N = (x + (N % 3));
            if( N == 1) break;
            else if(N == 2){
                total++;
                break;
            }
        }
        printf("%d\n",total);
    }
    return 0;
}
