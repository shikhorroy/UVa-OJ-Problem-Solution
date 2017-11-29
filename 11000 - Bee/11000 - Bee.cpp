#include<cstdio>
#include<cmath>
#define MAX 50
#define int64 long long
int main()
{
    int64 limit = pow(2, 32);
    int64 m[MAX], f[MAX];
    m[0] = 0, m[1] = 1, f[0] = 1, f[1] = 1;
    for(int i = 2; i < 47; i++){
        f[i] = f[i - 1]  + f[i - 2];
        m[i] = m[i -1] + f[i - 1];
    }
    int n;
    while(scanf("%d",&n), n != -1){
        printf("%lld %lld\n",m[n],(m[n]+f[n]));
    }
    return 0;
}
