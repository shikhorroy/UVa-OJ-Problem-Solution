#include<iostream>
#include<map>
#include<cmath>
using namespace std;

unsigned long long int num;
unsigned long long int total_div;
map <unsigned long long int, unsigned long long int> m;
unsigned long long int total_val(){
    unsigned long long int total = 1;
    for(map<unsigned long long int, unsigned long long int>::iterator it = m.begin(); it!= m.end(); ++it){
        total *= ((it->second)+1);
    }
    return total;
}

unsigned long long int divisor(unsigned long long int num){
    while(num){
        int ck = 0;
        for(unsigned long long int i = 2; i<= sqrt(num); i++){
            if(num %i == 0){
                m[i]++;
                num /= i;
                ck = 1;
                break;
            }
        }
        if(ck == 0){
            m[num]++;
            break;
        }
    }
    unsigned long long int total = total_val();
    return total;
}

int main(){
    unsigned long long int T, max_div;
    unsigned long long int _num, num1, num2, i, _num1, _num2;
    cin>>T;

    while(T--){
        max_div = 0;
        cin>>num1>>num2;
        if(num1 == 1 && num2 == 1)
        {
            cout<<"Between "<<num1<<" and "<<num2<<", "<<1<<" has a maximum of "<<1<<" divisors."<<endl;
            continue;
        }
        for(i = num1; i<=num2; i++){
            total_div = divisor(i);
            if(total_div>max_div){
                _num = i;
                max_div = total_div;
            }
            m.clear();
        }
        cout<<"Between "<<num1<<" and "<<num2<<", "<<_num<<" has a maximum of "<<max_div<<" divisors."<<endl;
    }
    return 0;
}

