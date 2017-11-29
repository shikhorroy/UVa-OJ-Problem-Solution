#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define spc pf(" ")
#define bar pf("|")
#define sign pf("%c",'-')
#define nl pf("\n")
#define MAX 100
#define FOR(b,e) for(int i = b; i <= e; i++)
void layer1(char ch, int x){
    if(ch == '1' || ch == '4'){
        spc; FOR(1,x) spc; spc;
    }else{
        spc; FOR(1,x) sign; spc;
    }
}
void layer2(char ch,int x){
    if(ch == '0' || ch == '4' || ch == '8' || ch == '9'){
        bar; FOR(1,x) spc; bar;
    }else if(ch == '5' || ch == '6'){
        bar; FOR(1,x) spc; spc;
    }else{
        spc; FOR(1,x) spc; bar;
    }
}
void layer3(char ch,int x){
    if(ch == '0' || ch == '1' || ch == '7'){
        spc; FOR(1,x) spc; spc;
    }else{
        spc;FOR(1,x) sign; spc;
    }
}
void layer4(char ch,int x){
    if(ch == '0' || ch == '6' || ch == '8'){
        bar; FOR(1,x) spc; bar;
    }else if(ch == '2'){
        bar; FOR(1,x) spc; spc;
    }else{
        spc;FOR(1,x) spc; bar;
    }
}
void layer5(char ch, int x){
    if(ch == '1' || ch == '4' || ch == '7'){
        spc; FOR(1,x) spc; spc;
    }else{
        spc; FOR(1,x) sign; spc;
    }
}
int main()
{
    int s;
    char n[MAX];
    while(sf("%d%s",&s,n)){

        if(s == 0 && (!strcmp(n,"0")))  break;

        int l = strlen(n);

        for(int j = 0; j < l; j++){
            layer1(n[j],s); if(j != l -1)spc;
        }nl;
        for(int i = 0; i < s; i++){
            for(int j = 0; j < l; j++){
                layer2(n[j],s); if(j != l -1) spc;
            }nl;
        }
        for(int j = 0; j < l; j++){
            layer3(n[j],s); if(j != l -1) spc;
        }nl;
        for(int i = 0; i < s; i++){
            for(int j = 0; j < l; j++){
                layer4(n[j],s); if(j != l -1) spc;
            }nl;
        }
        for(int j = 0; j < l; j++){
            layer5(n[j],s); if(j != l -1) spc;
        }nl;nl;
    }
    return 0;
}
