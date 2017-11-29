#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long sides[3];
    long i,j;
    long _case;
    scanf("%ld",&_case);
    for(i=1;i<=_case;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%ld",&sides[j]);
        sort(sides,sides+3);
        if(sides[0]+sides[1]<=sides[2])
            printf("Case %ld: Invalid\n",i);
        else if(sides[0]==sides[1] && sides[1]==sides[2])
            printf("Case %ld: Equilateral\n",i);
        else if(sides[0]==sides[1] || sides[1]==sides[2] || sides[0]==sides[2])
            printf("Case %ld: Isosceles\n",i);
        else
            printf("Case %ld: Scalene\n",i);
    }
    return 0;
}
