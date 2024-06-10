/*
    Missing Number from array
    ex.
        INPUT - 
            arr =[1, 2, 4, 5]
        
        OUTPUT -
            3
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //using sum solution... TC - O(N)
        int missingNumber(vector<int>&arr, int N){
            if(N<2){
                return 0;
            }
            int sumOfNumbers = (N*(N+1))/2;
            int sumOfArray = arraySum(arr, N);

            return (sumOfNumbers - sumOfArray);
        }
        
        //using XOR operations TC - O(N)

        int missingNumberXOR(vector<int>&arr, int N){
            int xorPtr1 = 0, xorPtr2=0;

            for(int i=0;i<N-1;i++){
                xorPtr1 ^= (i+1);
                xorPtr2 ^= arr[i];
            }

            return ((xorPtr1^N) ^ xorPtr2);
        }

    private:
        int arraySum(vector<int>&arr, int N){
            int sum = 0;
            for(auto ele : arr){
                sum += ele;
            }
            return sum;
        }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    Solution s;
    int num = s.missingNumber(arr, n);
    cout<<"missing number from array is : "<<num<<endl;

    cout<<"missing number from array using xor is: "<<s.missingNumberXOR(arr,n)<<endl;
    return 0;
}