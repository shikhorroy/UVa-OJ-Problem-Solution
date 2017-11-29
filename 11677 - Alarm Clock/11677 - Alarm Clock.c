#include<stdio.h>
int main()
{
    int total;
    int h1,h2,m1,m2;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2))
    {
        total=0;
        if(h1==0 && h2==0 && m1==0 && m2==0)
            break;

        if(h1==0)   h1=24;
        if(h2==0)   h2=24;

        if(h2>=h1)
            if(h1==h2 && m2<m1)
                total+=(24*60-m1+m2);
            else
                total+=((60*(h2-h1))-m1+m2);
        else
            total+=((60*((24-h1)+h2))-m1+m2);

        printf("%d\n",total);
    }
    return 0;
}
