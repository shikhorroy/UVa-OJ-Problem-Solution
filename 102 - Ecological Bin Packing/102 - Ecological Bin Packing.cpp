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
#define MAX 50

ll array[3][3];
char str[4] = {'B','G','C','\0'};
///B = 0, G = 1, C = 2
ll x, sum, MIN, B, G, C;

void planning(ll b, ll g, ll c){
    x = sum - (array[0][b] + array[1][g] + array[2][c]);
    if(x < MIN){
        MIN = x;
        B = b, G  = g, C = c;
    }
}
int main()
{
    while(true)
    {
        bool flag = false;
        sum = 0,  MIN = 999999999999999999;
        for(ll i = 0; i < 3; i++)
        {
            for(ll j = 0; j < 3; j++){
                if(sf("%lld", &array[i][j]) == EOF){
                    flag = true;
                    i = 10;
                    break;
                }
                sum += array[i][j];
            }
        }
        if(flag) break;
        planning(0, 2, 1);
        planning(0, 1, 2);
        planning(2, 0, 1);
        planning(2, 1, 0);
        planning(1, 0, 2);
        planning(1, 2, 0);

        printf("%c%c%c %lld\n",str[B],str[G],str[C],MIN);
    }
    return 0;
}
