#include<iostream>
#include<cstdio>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    char c, ch;
    while(sf("%c ",&c), c != '0'){
        bool flag = false;
        while(sf("%c",&ch)){
            if(ch == '\n') break;
            if(ch != c){
                if(ch == '0' && flag == false) continue;
                pf("%c",ch);
                flag = true;
            }
        }
        if(!flag)   pf("0");
        pf("\n");
    }
    return 0;
}
