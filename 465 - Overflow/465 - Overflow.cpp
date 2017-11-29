#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    long double a,b;
    char s[1000],t[1000];
    char c;
    while(cin>>s>>c>>t)
    {
        a=atof(s);
        b=atof(t);
        cout<<s<<" "<<c<<" "<<t<<endl;
         if(a>2147483647)
            cout<<"first number too big"<<endl;
        if(b>2147483647)
            cout<<"second number too big"<<endl;
         if(c=='+' && (a+b)>2147483647)
            cout<<"result too big"<<endl;
        if(c=='*' && (a*b)>2147483647)
            cout<<"result too big"<<endl;
    }
    return 0;
}
