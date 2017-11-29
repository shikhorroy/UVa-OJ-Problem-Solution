#include<stdio.h>
#include<math.h>
int main()
{
    long long i, temp;
    long long a, b, count;

    while(scanf("%lld%lld",&a,&b),a!=0 && b!=0)
    {
        count=0;
        for(i = a;i <= b;i ++)
        {
            temp = sqrt(i);
            if( (temp*temp) == i)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
