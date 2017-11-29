#include<stdio.h>
#include<math.h>
int main()
{
    int test,cas=0;
    double b,c,d,a,s,t,u,v;
    while(scanf("%d",&test))
    {
        if(test==0)
        break;
        scanf("%lf %lf %lf",&b,&c,&d);
        cas++;
        if(test==1)
        {
            a=(c-b)/(float)d;
            s=b*d+(1.0/2)*a*d*d;
            printf("Case %d: %.3lf %.3lf\n",cas,s,a);
        }
        if(test==2)
        {
            t=(c-b)/(float)d;
            s=b*t+(1.0/2)*d*t*t;
            printf("Case %d: %.3lf %.3lf\n",cas,s,t);
        }
        if(test==3)
        {
            v=sqrt(b*b+2*c*d);
            t=(v-b)/(float)c;
            printf("Case %d: %.3lf %.3lf\n",cas,v,t);
        }
        if(test==4)
        {
            u=sqrt(b*b-2*c*d);
            t=(b-u)/(float)c;
            printf("Case %d: %.3lf %.3lf\n",cas,u,t);
        }
    }
    return 0;
}
