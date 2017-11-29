#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cctype>
using namespace std;
#define MAX 101
int main()
{
    int T, a;
    char ch, str[MAX];
    scanf("%d",&T);
    for(int i = 1; i <= T; i++){
        float res;
        int b = 0;
        scanf("%d",&a);
        res = (a * 0.5);
        gets(str);
        int len = strlen(str);
        for(int i = 0; i < len; i++)
            if(isdigit(str[i])) b = (str[i] - '0');
        res += (b * .05);
        printf("Case %d: ",i);
        cout<<res<<"\n";
    }
    return 0;
}
