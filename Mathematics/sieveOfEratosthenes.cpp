/*
    Given a number n, print all primes smaller than or equal to n.
    It is also given that n is a small number.

    Example:
        Input : 
            n =10
        Output :
            2 3 5 7

        Input :
            n = 20
        Output: 
        2 3 5 7 11 13 17 19
*/

/*
    The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n
    when n is smaller than 10 million or so.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printPrimes(int n){
            vector<bool>isPrimes(n+1, true);
            for(int i=2;i*i<=n;i++){
                if(isPrimes[i]){
                    for(int j=2*i;j<=n;j+=i){
                        isPrimes[j] = false;
                    }
                }
            }

            for(int i=2;i<=n;i++){
                if(isPrimes[i]) cout<<i<<" ";
            }
        }

        void sieveOfEratosthenes(int n){
            vector<bool>isPrimes(n+1, true);
            for(int i=2;i*i<=n;i++){
                if(isPrimes[i]){
                    for(int j=i*i;j<=n;j+=i){
                        isPrimes[j] = false;
                    }
                }
            }

            for(int i=2;i<=n;i++){
                if(isPrimes[i]) cout<<i<<" ";
            }
        }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    s.printPrimes(n);
    cout<<endl;
    s.sieveOfEratosthenes(n);

    return 0;
}