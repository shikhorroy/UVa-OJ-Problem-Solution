#include<stdio.h>
#include<math.h>
int main()
{
    double n,p,k,power;

    while((scanf("%lf%lf",&n,&p))!=EOF)
    {
        power=(1/n);

        printf("%.0lf\n",pow(p,power));
    }
    return 0;
}
