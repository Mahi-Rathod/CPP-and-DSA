#include<iostream>
using namespace std;
bool isPalindrome(int *arr, int N){
    int i=0,j=N-1;
    while(i<=j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++, j--;
    }
    return true;
}

int main(){
    int N;
    cout<<"Enter the Size of Array: ";
    cin>>N;
    int *arr = new int[N];
    cout<<"Enter the Array Element: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    if(isPalindrome(arr, N)){
        cout<<"Provided Array is Palindrome..."<<endl;
    }
    else{
        cout<<"Provided Array is Not Palindrome..."<<endl;
    }
    return 0;
}