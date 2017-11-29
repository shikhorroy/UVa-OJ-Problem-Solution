#include<bits/stdc++.h>

using namespace std;

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

int main()
{
   int n, res, l;
   while(scanf("%d",&n) && n){
      int x = n;
      vector<int> D;
      int m = (int)sqrt(n);
      for(int d = 1; d <= m; d++) {
         if(x % d == 0) {
            int d2 = x / d;
            D.push_back(d);
            if(d != d2) D.push_back(d2);
         }
      }
      res = 0; l = D.size();
      for(int i = 0; i < l; i++) {
         for(int j = i; j < l; j++) {
            if(lcm(D[i],D[j]) == n) res++;
         }
      }
      printf("%d %d\n", n, res);
   }
   return 0;
}
