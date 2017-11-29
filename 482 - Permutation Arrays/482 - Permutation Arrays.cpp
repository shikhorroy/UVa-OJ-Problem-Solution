#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
    bool flag = false;
    int t, index;
    string line1, line2, value;

    vector<pair<int, string> > store;

    scanf("%d", &t);
    getchar();

    while (t--)
    {
        getchar();

        getline(cin, line1);
        getline(cin, line2);

        stringstream ss1(line1), ss2(line2);

        while (ss1 >> index)
        {
            ss2 >> value;
            store.push_back(make_pair(index, value));
        }

        sort(store.begin(), store.end());

        if (flag) printf("\n"); flag = true;

        int l = store.size();
        for(int i = 0; i < l; i++)
            printf("%s\n", store[i].second.c_str());

        store.clear();
    }
    return 0;
}
