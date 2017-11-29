#include <iostream>
using namespace std;
int nCase, caseI;
long gcd, lcm;
int main() {
    cin >> nCase;
    for (caseI = 0; caseI < nCase; ++caseI) {
        cin >> gcd >> lcm;
        if (lcm % gcd != 0)
            cout << -1 << endl;
        else
            cout << gcd << " " << lcm << endl;
    }
    return 0;
}
