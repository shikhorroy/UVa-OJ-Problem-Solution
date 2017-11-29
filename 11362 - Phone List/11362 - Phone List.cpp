#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
string str[10001];
int main()
{
    int k, T, n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
            cin >> str[i];
        sort(str, str + n);

        bool flag = true;
        for(int j = 0; j < n - 1; j++)
        {
            int l1 = str[j].length(), l2 = str[j + 1].length();
            if(l1 <= l2)
            {
                string s =  str[j + 1].substr(0, l1);
                if(s == str[j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
