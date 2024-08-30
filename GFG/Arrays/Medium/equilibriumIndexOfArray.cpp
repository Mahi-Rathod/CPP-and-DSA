#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int equilibriumIndex(int arr[], int N) {
            int sum =0;
            for(int i=0;i<N;i++){
                sum+=arr[i];
            }

            int leftSum=0;

            for(int i=0;i<N;i++){
                sum -=arr[i];
                if(leftSum == sum){
                    return i;
                }
                leftSum+=arr[i];
            }
            return -1;
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout << s.equilibriumIndex(arr,N) << endl;
    return 0;
}