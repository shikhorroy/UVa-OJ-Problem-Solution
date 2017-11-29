#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, anStr;
    int cnum; scanf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        cin >> str;
        int l = str.length();
        int q; scanf("%d", &q);
        for(int i = 1; i <= q; i++)
        {
            cin >> anStr;
            int sl = anStr.length();
            cout << str.substr(0, sl) << endl;
            if(str.substr(0, sl) == anStr)
                printf("y\n");
            else
                printf("n\n");
        }
    }
    return 0;
}

