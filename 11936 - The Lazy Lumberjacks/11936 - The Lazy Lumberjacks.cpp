#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int  num[3];
    int i,j;
    int _case;

    scanf("%dd",&_case);
    for(i=0;i<_case;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&num[j]);
        sort(num,num+3);
        if((num[0]+num[1])>num[2])
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
