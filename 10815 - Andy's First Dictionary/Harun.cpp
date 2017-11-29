#include<iostream>
#include<set>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char a[205],b[205],ch;
    set<string>v;
    int i,l,in,k;
    while(cin>>a)
    {
        k=0;
        l=strlen(a);
        while(k<l)
        {
            in=0;
            if(!isalpha(a[k]))
            {
                while(!isalpha(a[k]))
                    k++;
            }
            if(isalpha(a[k]))
            {
                while(isalpha(a[k]))
                {
                    ch=tolower(a[k]);
                    b[in++]=ch;
                    k++;
                }
                b[in]='\0';
                v.insert(string(b));
            }
        }
    }
    for(set<string>::iterator it=v.begin(); it!=v.end(); it++)
        cout<<*it<<endl;
    v.clear();
    return 0;
}
