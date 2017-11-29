#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int T, flag = 0;
    string str, tstr = "a";
    scanf("%d",&T);
    while(T--){
        int ff =0, mm = 0;
        flag = 0;
        while(cin>>str){
            if(str == "MF" || str =="FM"){

                if(flag)    flag = 0;
                else    flag = 1;
            }else{
                if(str == "FF")   ff ++;
                else    mm ++;
            }
            ch = getchar();
            if(ch == '\n'){
                if(flag == 0 && ff == mm)    printf("LOOP\n");
                else    printf("NO LOOP\n");
                break;
            }
        }
    }
    return 0;
}
