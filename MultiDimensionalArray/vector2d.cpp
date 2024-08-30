#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>arr[], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
}

void display(vector<vector<int>>arr,int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
}

int main(){
    int m=3, n=2;
    vector<int>arr[m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i].push_back(i+1); //it just appending number to last of arr like (arr.append(num))..
        }
    }

    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nPassing to the Function\n";
    print(arr,m,n);
    cout<<"\n\nAnother Method: \n"<<endl;
    //in vector we also have an another aproach in which rows are also be dynamic
    vector<vector<int>>brr;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        brr.push_back(v);
    }

    //yes we can pass it as parameters to the functions
    display(brr, m, n);
    return 0;

}