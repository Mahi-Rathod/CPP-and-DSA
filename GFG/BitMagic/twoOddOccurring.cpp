#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        //The Idea is we convert the array in two parts such a way that one odd in one array and one in other and use oneOddOccurring Method

        vector<int> twoOddOccurring(vector<int>arr) {
            int x = arr[0];
            for(int i=1;i<arr.size();i++){
                x ^= arr[i];
            }

            int k = (x & (~(x-1))); //here we are obtaining the number from x (xor of all array) with only rightmost setbit 

            int num1 = 0, num2 = 0;
            for(int i=0;i<arr.size();i++){
                if((arr[i]&k) != 0){
                    num1 ^= arr[i];
                }
                else{
                    num2 ^= arr[i];
                }
            }
            
            return {num1, num2};
        }
};

int main() {
    int N;
    cin >> N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Solution s;
    vector<int>ans = s.twoOddOccurring(arr);
    cout << ans[0] <<" "<< ans[1] << endl;
    return 0;
}