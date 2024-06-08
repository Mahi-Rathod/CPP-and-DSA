#include <iostream>
#include <vector>
using namespace std;

// Naive Solution TC -> O(N*K) , SC -> O(1)
void rotateArray(vector<int> &arr, int N, int K){
    while (K-- and K != N){
        int temp = arr[0];
        for (int i = 0; i < N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = temp;
    }
}

// Optimized Solution TC->O(N) , SC->O(1)
void reverseSubArray(vector<int> &brr, int i, int j){
    while(i<j){
        int temp = brr[i];
        brr[i] = brr[j];
        brr[j] = temp;
        i++, j--;
    }
}

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> arr(N, 0);  
    vector<int> brr(N, 0);
    for (int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
        brr[i] = temp;
    }

    rotateArray(arr, N, K);

    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    cout << "\n";

    reverseSubArray(brr, 0, (K%N)-1);
    reverseSubArray(brr, (K%N), N-1);
    reverseSubArray(brr, 0, N-1);


    for(int i=0; i<N; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}