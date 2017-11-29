using namespace std;

#include <bits/stdc++.h>

#define  sf scanf
#define  pf printf

#define DEBUG1(x) cout << "> " << #x << ": " << x << endl
#define DEBUG2(x, y) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << endl
#define DEBUG3(x, y, z) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << " > " << #z << ": " << z << endl

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/

/*-----------Sieve Method Starts Here------------------*/
const long long MAXX = 1E12 + 5;

const int MAX = sqrt(MAXX);
const int LIMIT = sqrt(MAX);

bool flag[MAX];
vector<int> primes;

void sieve_method(){
    primes.push_back(2);

    for(int i = 3; i <= MAX; i += 2) flag[i] = true;

    for(int i = 3; i <= MAX; i += 2){
        if(flag[i]){
            primes.push_back(i);
            if(i <= LIMIT) for(int j = i * i; j <= MAX; j += (2 * i)) flag[j] = false;
        }
    }
}
/*-----------Sieve Method Ends Here------------------*/

int total_count(long long n) {
    int ans = 0, sz = primes.size();
    for (int i = 0; primes[i] * 1LL * primes[i] <= n and i < sz; i++) {
//        DEBUG2("for ", primes[i]);
        ans += log10(n) / log10(primes[i]) - 1;
//        DEBUG1(ans);
    }

    return ans;
}
int main()
{
    //freopen("input.txt", "r", stdin);

    sieve_method();

    int n;
    long long low, high;
    sf("%d", &n);
    for (int i = 0; i < n; ++i) {
        sf("%lld %lld", &low, &high);
//        DEBUG2(low, high);
        int ans = total_count(high);
        if (low - 1 > 0){
            ans -= total_count(low - 1);
        }
//        DEBUG1(ans);


        printf("%d\n", ans);
    }

    return 0;
}
