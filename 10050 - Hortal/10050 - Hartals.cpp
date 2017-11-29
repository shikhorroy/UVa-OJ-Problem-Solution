#include<iostream>
#include<list>
using namespace std;
int main(){
    int cnum, n, days, par;
    cin>>cnum;
    while(cnum--){
        list <int> l;
        cin>>days>>n;
        while(n--){
            cin>>par;
            for(int i = par; i <= days; i += par){
                if(i % 7 != 6 && i % 7 != 0){
                    l.push_back(i);
                }
            }
        }
        l.sort(); l.unique();
        cout<<l.size()<<"\n";
    }
    return 0;
}
