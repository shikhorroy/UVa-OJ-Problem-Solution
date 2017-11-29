#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    string str;
    scanf("%d%*c",&T);
    while(T--)
    {
        getline(cin, str);

        int length = str.length();
        if(length%2)
        {
            printf("No\n");
            str.clear();
            continue;
        }
        int i = 0, len = str.length();
        while(!str.empty() && i < len)
        {
            if(str[i] == ')')
            {
                i--;
                if(i < 0)
                    break;
                if(str[i] == '(')
                {
                    str.erase(i,2);
                    len = str.length();
                    continue;
                }
                else    break;
            }
            else if(str[i] == ']')
            {
                i--;
                if(i < 0)
                    break;
                if(str[i] == '[')
                {
                    str.erase(i,2);
                    len = str.length();
                    continue;
                }
                else    break;
            }
            else   i++;
        }
        if(str.empty())    printf("Yes\n");
        else    printf("No\n");
        str.clear();
    }
    return 0;
}
