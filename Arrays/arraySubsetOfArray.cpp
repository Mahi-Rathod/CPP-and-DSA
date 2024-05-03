#include<iostream>
using namespace std;

void sort(int *arr, int N){
    for(int i=2;i<N;i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>key and j>0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
} //This Sorting Method is Known as Insertion Sort and takes O(n*n) to sort

string isSubset(int arr1[], int arr2[], int N, int M){
    sort(arr1,N);
    for(int i=0;i<N;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    sort(arr2,M);
    for(int i=0;i<M;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<"\n";
    int i=0,j=0;
    while(i<N && j<M){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            i++;
            j++;
        }
        else{
            return "NO";
        }
    }
    return (j==M) ? "YES" : "NO";
}

int main(){
    int N,M;
    cout<<"Enter the length of first Array: ";
    cin>>N;
    int arr1[N];
    cout<<"Enter the First Array Elements: ";
    for(int i=0;i<N;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the Length of second Array: ";
    cin>>M;
    int arr2[M];
    cout<<"Enter the Element of Second Array: ";
    for(int i=0;i<M;i++){
        cin>>arr2[i];
    }
    cout<<isSubset(arr1, arr2, N, M);
    return 0;
}