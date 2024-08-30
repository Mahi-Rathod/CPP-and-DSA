#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPrime(int num){
            if(num == 1) return false;
            if(num == 2 || num == 3) return true;
            if(num % 2 == 0 || num % 3 == 0) return false;

            for(int i=5;i*i<=num;i+=6){
                if(num % i == 0 || num % (i+2) == 0){
                    return false;
                }
            }
            
            return true;
        }

        void primeFactorsNaive(int Num){
            for(int i=2;i<=Num;i++){
                if(isPrime(i)){
                    int x = i;
                    while(Num % x == 0){
                        cout<<i<<" ";
                        x = x*i;
                    }
                }
            }
            cout<<endl;
        }

        void primeFactorsEfficiant(int Num){
            if(Num <= 1) return;

            for(int i=2;i*i<=Num;i++){
                if(isPrime(i)){
                    while(Num % i == 0){
                        cout<<i<<" ";
                        Num /= i;
                    }
                }
            }
            if(Num > 1) cout<<Num<<endl;
        }

        void primeFactorizations(int Num){
            if(Num <= 1) return;

            while(Num % 2 == 0){
                cout<<2<<" ";
                Num /=2;
            }

            while(Num % 3 == 0){
                cout<<3<<" ";
                Num /= 3;
            }

            for(int i=5;i*i<=Num;i+=6){
                while(Num % i == 0){
                    cout<<i<<" ";
                    Num /= i;
                }

                while(Num % (i+2) == 0){
                    cout<<(i+2)<<" ";
                    Num /= (i+2);
                }
            }

            if(Num > 3) cout<<Num<<endl;
        }
};

int main(){
    int num;
    cin>>num;

    Solution s;
    s.primeFactorsNaive(num);
    s.primeFactorsEfficiant(num);
    s.primeFactorizations(num);
    return 0;
}