#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    while(scanf("%d",&N), N != 0){
        priority_queue <int> Q;
        while(N--){
            int num;
            scanf("%d",&num);
            Q.push(-num);
        }
        int cost = 0;
        while(Q.size() != 1){
            int x = Q.top(); Q.pop();
            int y = Q.top(); Q.pop();
            int sum = -(x + y);
            cost += sum;
            Q.push(-sum);
            //cout<<"Cost = "<<cost<<"\n";
        }
        printf("%d\n",cost);
    }
    return 0;
}
