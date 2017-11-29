#include<iostream>
#include<cstdio>
#include<list>
#include<algorithm>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    list<string>l;
    char ch;
    string str;
    while(scanf("%c",&ch) != EOF){
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
            if(isupper(ch)) str += tolower(ch);
            else   str += ch;
        }
        else{
            if(str.length() != 0){
                l.push_back(str);
                str.clear();
            }
        }
    }
    l.sort();
    l.unique();
    for(list<string>::iterator it = l.begin(); it != l.end(); ++it)
        cout<<*it<<"\n";
    return 0;
}
