/* 
    print all the divisors of the numbers;
    ex 1:
        Input :
            N = 15
        Output :
            1 3 5 15

    ex 2:
        Input :
            N = 100
        Output :
            1 2 4 5 10 20 25 50 100
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void divisorsOfNumber(int num){
            for(int i=1;i<=(num/2);i++){
                if(num % i == 0){
                    cout<<i<<" ";
                }
            }
            cout<<num<<endl;
        }

        void divisorOfNumberOptimized(int num){
            int i = 1;
            while(i*i < num){
                if(num % i == 0) cout<<i<<" ";
                i++;
            }
            while(i > 0){
                if(num % i == 0) cout<<num/i<<" ";
                i--;
            }
        }
};


int main(){
    int number;
    cin>>number;

    Solution s;
    s.divisorsOfNumber(number);
    s.divisorOfNumberOptimized(number);

    return 0;
}