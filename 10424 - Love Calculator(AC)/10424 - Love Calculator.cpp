#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
#define pf printf
#define sf scanf
int less_10(int n){
    int result = 0;
    while(n > 0){
        result += n % 10;
        n = n / 10;
    }
    return result;
}
int SUMM(string s, int l)
{
    int sum = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] >= 'A' && s[i] <='Z')
        {
            sum += ((int)s[i] + 1 - (int)'A');
        }
        else if(s[i] >= 'a' && s[i] <='z')
        {
            sum += ((int)s[i] + 1 - (int)'a');
        }
    }
    while(sum > 9) sum = less_10(sum);
    return sum;
}
int main()
{
    string name1, name2;
    while(getline(cin, name1))
    {
        getline(cin, name2);
        int l1 = name1.length(),
            l2 = name2.length();
        int sum1 = SUMM(name1, l1), sum2 = SUMM(name2, l2);
        if(sum1 > sum2) pf("%.2lf %%\n",sum2/(sum1*1.00)*100);
		else pf("%.2lf %%\n",sum1/(sum2*1.00)*100);
    }
    return 0;
}
