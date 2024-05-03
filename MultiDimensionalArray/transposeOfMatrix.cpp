#include<iostream>
#include<vector>
using namespace std;
void Transpose(vector<vector<int>>arr, int m, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int m,n;
    cout<<"Enter the value of m and n space separated : ";
    cin>>m>>n;
    vector<vector<int>>arr;
    cout<<"Enter the Matrix: "<<endl;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        arr.push_back(v);
    }

    cout<<"Transpose of Matrix \n";
    Transpose(arr,m,n);
    return 0;
}

//for the better time complexity use the swapping swap(mat[i][j], mat[j][i])