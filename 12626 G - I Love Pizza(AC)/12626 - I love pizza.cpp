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
#define FOR(s,e) for(int i = s; i <= e; i++)
#define sf scanf
#define pf printf
#define MAX 10002
int main()
{
    int N;
    char ch;
    sf("%d%*c",&N);
    while(N--)
    {
        int flag = 0;
        int count[6] = {0};
        while(scanf("%c",&ch))
        {
            if(ch == '\n')  break;
            if(ch == 'A')   count[0]++;
            else if(ch == 'G')  count[1]++;
            else if(ch == 'I')  count[2]++;
            else if(ch == 'M')  count[3]++;
            else if(ch == 'R')  count[4]++;
            else if(ch == 'T')  count[5]++;
        }
        for(int i = 0; i < 6; i++)
        {
            if(count[i] == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            pf("0\n");
            continue;
        }
        if(count[0] < 3 || count[4] < 2)
        {
            pf("0\n");
            continue;
        }
        int min = 1000;
        for(int i = 1; i < 6; i++)
        {
            if(i != 4)
                if(count[i] < min)  min = count[i];
        }
        int num_A = (count[0] / 3), num_R = (count[4] / 2);
        if(num_A < min) min = num_A;
        if(num_R < min) min = num_R;
        pf("%d\n",min);
    }
    return 0;
}


