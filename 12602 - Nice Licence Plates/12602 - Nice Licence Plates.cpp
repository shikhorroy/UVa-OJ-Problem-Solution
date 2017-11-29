#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[10];
        int second;
        scanf("%s",str);
        //printf("%s %d\n",str,second);
        int first = (str[0] - 'A')*676 + (str[1] - 'A')* 26 + (str[2] - 'A');
        sscanf(str + 4, "%d", &second);
        puts(abs(first - second) <= 100 ? "nice" : "not nice");
    }
    return 0;
}
