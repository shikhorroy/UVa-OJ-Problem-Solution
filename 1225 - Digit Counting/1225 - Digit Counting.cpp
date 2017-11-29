#include <cstdio>
int main ()
{
    int testCase; scanf ("%d", &testCase);

    while ( testCase-- ) {
        int n; scanf ("%d", &n);
        int cnt [10] = {0};

        for ( int i = 1; i <= n; i++ ) {
            int tmp = i;
            while ( tmp ) {
                cnt [tmp % 10]++;
                tmp /= 10;
            }
        }
        for ( int i = 0; i < 9; i++ ) printf ("%d ", cnt [i]);
        printf ("%d\n", cnt [9]);
    }
    return 0;
}
