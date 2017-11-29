#include <stdio.h>
#include <math.h>
#define N 100000
 
int d [N + 5];
long long sigma [N + 5];
 
int main ()
{
    d [1] = 1;
    sigma [1] = 1;
 
    for ( int i = 2; i <= 100000; i++ ) {
        int len = (int) sqrt (i);
        d [i] = 2;
        sigma [i] = 1 + i;
        for ( int j = 2; j <= len; j++ ) {
            if ( i % j == 0 ) {
                d [i] += 2;
                sigma [i] += j;
                sigma [i] += (i / j);
            }
        }
 
        if ( len * len == i ) { d [i]--; sigma [i] -= len; }
    }
 
    int testCase; scanf ("%d", &testCase);
    int a, b, k;
 
    while ( testCase-- ) {
        scanf ("%d %d %d", &a, &b, &k);
        
        int num = (a % k) ? (a - (a % k)) + k : a;
        
        int g = 0;        
        long long h = 0;
 
        while ( num <= b ) {
            g += d [num];
            h += sigma [num];
            num += k;
        }
 
        printf ("%d %lld\n", g, h);
    }
 
    return 0;
}