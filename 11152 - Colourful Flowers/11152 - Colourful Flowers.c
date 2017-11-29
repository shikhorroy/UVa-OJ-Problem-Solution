#include<stdio.h>
#include<math.h>
#define PI (2*acos(0.0))
int main()
{
    double s,A,R,r;
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4*A);
        r=A/s;
        printf("%.4lf %.4lf %.4lf\n",((PI*R*R)-A),(A-(PI*r*r)),(PI*r*r));
    }
    return 0;
}
