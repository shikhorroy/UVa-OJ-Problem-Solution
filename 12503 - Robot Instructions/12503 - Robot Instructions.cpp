#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<cctype>
#include<cmath>
using namespace std;
#define MAX 101
int main()
{
    map <string, int> m;
    m["LEFT"] = -1;
    m["RIGHT"] = 1;
    int t; scanf("%d",&t);
    while(t--){
        string str[MAX], s;
        int n; scanf("%d%*c",&n);
        int p = 0, i = 1;
        while(n--){
            getline(cin, s);
            if(s == "LEFT" || s == "RIGHT"){
                str[i] += s; i++;
                p += m[s];
            }
            else{
                int l = s.length(), x = 0, e = 0;
                for(int i = l - 1; ; e++, i--){
                    if(s[i] == ' ') break;
                    x += ((s[i] - '0') * pow(10, e));
                }
                str[i] += str[x]; i++;
                p += m[str[x]];
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
