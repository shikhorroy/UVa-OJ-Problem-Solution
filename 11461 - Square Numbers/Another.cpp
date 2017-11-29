#include<stdio.h>
#include<math.h>
int main()
{
    long long i, temp;
    long long a, b;

    while(scanf("%lld%lld",&a,&b),a!=0 && b!=0)
    {
        if(b > a){
            temp = a;
            a = b;
            b = temp;
        }
        if((long long)(sqrt(a)) * (long long)(sqrt(a)) == a){
            printf("%lld\n",((long long)sqrt(b) - (long long)sqrt(a))+1);
        }
    }
    return 0;
}
