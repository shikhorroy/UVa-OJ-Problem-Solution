#include<map>
#include<stack>
#include<cstdio>
#include<string>
#include<utility>
#include<iostream>
using namespace std;
int main()
{
    char ch;
    string str;
    int cnum, p, q;
    pair <int, int> pr1,pr2;
    map <char, pair <int, int> > m;
    cin>>cnum;
    while(cnum--)
    {
        cin>>ch>>p>>q;
        m[ch] = make_pair(p, q);
    }
    getchar();
    while(getline(cin, str))
    {
        bool flag = true;
        int l = str.length(), sum = 0;
        stack < pair<int, int> > stk;
        for(int i = 0; i < l; i++)
        {
            if(str[i] == ')')
            {
                pr1 = stk.top();
                stk.pop();
                pr2 = stk.top();
                stk.pop();
                if(pr2.second != pr1.first)
                {
                    cout<<"error"<<endl;
                    flag = false;
                    break;
                }
                sum += (pr2.first * pr2.second * pr1.second);
                stk.push(make_pair(pr2.first, pr1.second));
            }
            else if( str[i] != '(') stk.push(m[str[i]]);
        }
        if(flag)    cout<<sum<<endl;
    }
    return 0;
}
