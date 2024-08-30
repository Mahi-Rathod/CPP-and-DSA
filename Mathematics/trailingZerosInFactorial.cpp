#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int trailingZeros(int N){
            int ans = 0;
            for(int i=5; i<=N;i*=5){
                ans+= N / i;
            }
            return ans;
        }
};

int main(){
    int num;
    cin>>num;
    Solution s;
    cout<<s.trailingZeros(num)<<endl;
    return 0;
}