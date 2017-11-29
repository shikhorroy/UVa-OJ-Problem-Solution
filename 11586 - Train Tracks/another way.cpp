#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int T;
    scanf("%d%*c",&T);
    while(T--){
        char ch;
        int F = 0, M = 0;
        while(scanf("%c",&ch))
        {
            if(ch == '\n'){
                if(F == 1 && M ==1) printf("NO LOOP\n");
                else if(F == M) printf("LOOP\n");
                else    printf("NO LOOP\n");
                break;
            }
            if(ch == 'F')   F++;
            else if(ch =='M')   M++;
        }

    }
    return 0;
}
