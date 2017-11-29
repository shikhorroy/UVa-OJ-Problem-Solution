#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int k, q;
string str, sub_str;
int main()
{
    scanf("%d",&k);
    while(k--)
    {
        cin>>str;
        scanf("%d",&q);
        while(q--)
        {
            cin>>sub_str;
            int str_len = str.length(),
                sub_str_len = sub_str.length();
            if(str_len < sub_str_len)
            {
                printf("n\n");
                continue;
            }
            for(int i = 0; i < str_len; i++)
            {
                if((str_len - i) < sub_str_len)
                {
                    printf("n\n");
                    break;
                }
                string S;
                S.assign(str,i,sub_str_len);
                if(S == sub_str)
                {
                    printf("y\n");
                    break;
                }
            }
        }
    }
    return 0;
}
