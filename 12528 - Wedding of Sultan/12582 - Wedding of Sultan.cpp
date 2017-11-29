#include<iostream>
#include<cstdio>
#include<map>
#include<stack>
using namespace std;
int main(void)
{
    //freopen("12582 - Wedding of Sultan.txt","r", stdin);
    int cnum;
    scanf("%d",&cnum);
    for(int i = 0; i < cnum; i++)
    {
        string str;
        cin>>str;
        map <char, int> m;
        stack <char> stk;
        stk.push(str[0]);
        m[str[0]];
        int l = str.length();
        for(int j = 1; j < l; j++)
        {
            char c = str[j], ch;
            if(stk.size())
                ch = stk.top();
            else{
                stk.push(c);
                m[ch]++;
                m[c]++;
                continue;
            }
            if(c == ch)
                stk.pop();
            else{
                m[c]++;
                m[ch]++;
                stk.push(c);
            }
        }
        printf("Case %d\n",i + 1);
        for(map <char, int> :: iterator it = m.begin(); it != m.end(); ++it)
            cout<<(it->first)<<" = "<<(it->second)<<endl;
    }
    return 0;
}
