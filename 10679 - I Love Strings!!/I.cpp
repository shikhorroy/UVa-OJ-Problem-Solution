#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define pf printf
#define sf scanf
int main()
{
    int k, q;
    string S, sub_s;
    int found;
    sf("%d",&k);
    while(k--)
    {
        cin>>S;
        sf("%d",&q);
        while(q--)
        {
            cin>>sub_s;
            found = S.find(sub_s);
            if (found == string::npos)
                printf("n\n");
            else    printf("y\n");
        }
    }
    return 0;
}
