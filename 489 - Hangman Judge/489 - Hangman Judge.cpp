#include<iostream>
#include<cstdio>
#include<list>
#include<string>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    char ch;
    int rNum;
    list <char> l;
    string guss;
    while(sf("%d%*c",&rNum), rNum != -1){
        while(sf("%c",&ch), ch != '\n'){
            l.push_back(ch);
        }
        cin>>guss;
        pf("Round %d\n",rNum);
        int len = guss.length();
        int stroke = 0;
        bool flag = true;
        for(int i = 0; i < len; i++){
            int s = l.size();
            if(!l.empty()){
                l.remove(guss[i]);
            }
            else   break;
            if(l.size() == s)   stroke++;
            if(stroke == 7){
                flag = false;
                pf("You lose.\n");
                break;
            }
        }
        if(!l.empty() && stroke != 7)   pf("You chickened out.\n");
        else if(flag)   pf("You win.\n");
        l.clear();
    }
    return 0;
}
