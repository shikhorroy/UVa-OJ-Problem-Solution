#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int G;
    string str;
    while(scanf("%d",&G), G != 0){
        cin>>str;
        int len = str.length(),  mult = (len / G) - 1, target = mult, beg = 0;
        while(true){
            for(int i = target; i >= beg; i--){
                printf("%c",str[i]);
            }
            beg = target + 1;
            target +=  mult + 1;
            if(target > len - 1)    break;
        }
        printf("\n");
    }
    return 0;
}
