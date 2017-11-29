#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
#define MAX 5000
int main()
{
    freopen("input.txt","r", stdin);
    int len[MAX], max_val = 0;
    string str[MAX], tStr;
    int i;
    for(i = 0; getline(cin,str[i]); i++)
    {
        if(str[i] == "#") break;
        else    len[i] = str[i].length();
        if(len[i] > max_val)    max_val = len[i];
    }
    for(int j = 0; j < max_val; j++)
    {
        for(int k = 0; k < i; k++)
        {
            if(j < len[k])
                if(tStr.find(str[k][j]) == string::npos)
                    tStr += str[k][j];
        }
    }
    cout<<tStr<<"\n";
    return 0;
}
