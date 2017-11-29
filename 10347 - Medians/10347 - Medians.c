#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double m1, m2, m3, s, A;
    while(scanf("%lf %lf %lf", &m1, &m2, &m3)!=EOF)
    {
        s=(m1+m2+m3)/2.0;
        A=(4.0/3.0)*(sqrt(s*(s-m1)*(s-m2)*(s-m3)));
        if(A>0)
            printf("%.3lf\n", A);
        else
            printf("%.3lf\n", -1.0);
    }
    return 0;
}
