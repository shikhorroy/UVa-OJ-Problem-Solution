#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 100
int main()
{
    int t, n, x, a[MAX];
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        for(int j = 0; j < n; j++){
            scanf("%d",&a[j]);
        }
        sort(a, a+n);
        printf("%d\n",(a[n-1] - a[0])*2);
    }

    return 0;
}
