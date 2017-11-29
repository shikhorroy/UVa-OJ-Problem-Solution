#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string str;
    map<string, char>M;
    M["0 0 0"] = '*';
    M["0 0 1"] = 'C';
    M["0 1 0"] = 'B';
    M["0 1 1"] = 'A';
    M["1 0 0"] = 'A';
    M["1 0 1"] = 'B';
    M["1 1 0"] = 'C';
    M["1 1 1"] = '*';
    while(getline(cin, str)){
        printf("%c\n",M[str]);
    }
    return 0;
}
