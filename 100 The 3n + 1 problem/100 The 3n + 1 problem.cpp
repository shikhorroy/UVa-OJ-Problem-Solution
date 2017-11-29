using namespace std;
#include<bits/stdc++.h>

int seqLength(int n)
{
    int seq = 1;
    while(n != 1) {
        if (n & 1) n = 3 * n + 1;
        else n >>= 1;
        ++ seq;
    }
    return seq;
}
int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b;
    while(cin >> a >> b)
    {
        int maxAns = 0;
        for (int x = min(a, b), loop = max(a, b); x <= loop; ++x) {
            maxAns = max(maxAns, seqLength(x));
        }
        cout << a << " " << b << " " << maxAns << '\n';
    }
    return 0;
}
