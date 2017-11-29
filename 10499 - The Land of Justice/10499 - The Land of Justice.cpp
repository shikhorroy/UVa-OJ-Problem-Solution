#include<iostream>
using namespace std;
int main()
{
    long num;
    while(cin>>num,num>=0)
    {
        if(num == 1)  cout<<"0%\n";
        else cout<<num*25<<"%\n";
    }
    return 0;
}
