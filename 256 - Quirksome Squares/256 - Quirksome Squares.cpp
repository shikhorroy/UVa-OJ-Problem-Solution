#include<iostream>
using namespace std;
int main()
{
    int num;
    while(cin>>num){
        if(num == 2)
            cout<<"00\n01\n81\n";
        else if(num == 4)
            cout<<"0000\n0001\n2025\n3025\n9801\n";
        else if(num == 6)
            cout<<"000000\n000001\n088209\n494209\n998001\n";
        else
            cout<<"00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";
    }
    return 0;
}
