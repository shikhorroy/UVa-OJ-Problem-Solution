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
#include<list>
#include<map>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define MAX 5
int Ja, Sam, Sha, Sid, Tan;
void func(string inSeat, int M){
    if(inSeat == "Ja")   (Ja += M);
    else if(inSeat == "Sam") (Sam += M);
    else if(inSeat == "Sha") (Sha += M);
    else if(inSeat == "Sid") (Sid += M);
    else    (Tan += M);
}
int getIndex(string str){
    return (str == "Ja") ? 0 : (str == "Sam") ? 1 :
        (str == "Sha") ? 2 : (str == "Sid") ? 3 : 4;
}
int main()
{
    int T, M, N, K;
    sf("%d",&T);
    for(int i = 1; i <= T; i++){
        list <string> L[MAX];
        string inSeat, name;
        Ja = Sam = Sha = Sid = Tan = 0;
        sf("%d%d",&M,&N);cin>>inSeat;
        for(int j = 0; j <= 4; j++){
            sf("%d",&K);
            for(int k = 0; k < K; k++){
                cin>>name;
                L[j].push_back(name);
            }
        }
        int loop = M + 1, rem = 0, endPoint;
        for(int j = 0, k = 0;; k = loop*j + j){
            endPoint = k + M;
            if(endPoint > N) break;
            rem = endPoint + 2;
            //cout<<"Now in seat: "<<inSeat<<" ";
            func(inSeat, M);
            int index = getIndex(inSeat);
            inSeat = L[index].front();
            L[index].push_back(inSeat);
            L[index].pop_front();
            //cout<<"\tDuring: ";
            //cout<<k<<" - "<<rem<<"\n* List: ";
            j++;
            //for(list<string>::iterator it = L[index].begin(); it != L[index].end(); ++it)
                //cout<<*it<<" ";
            //cout<<"\n";
        }
        //cout<<"\n\n";
        rem = N - rem;
        if(rem > 0) func(inSeat,rem);
        pf("Case %d:\n",i);
        pf("Ja %d\nSam %d\nSha %d\nSid %d\nTan %d\n",Ja,Sam,Sha,Sid,Tan);
    }
    return 0;
}
