#include<iostream>
using namespace std;
void print(int **matrix, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void println(int *matrix[], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int m=3,n=2;
    int **arr;
    arr = new int *[m];
    for(int i=0;i<m;i++){
        arr[i] = new int [n];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 10;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    print(arr,m,n); //passing matrix to the function using double pointer

    //using array of pointer to create the 2Darray
    int *matrix[m];
    for(int i=0;i<m;i++){
        matrix[i] = new int [n];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrix[i][j] = i*i + j*j;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nPassing to the function\n";
    println(matrix, m, n);
    
    return 0;
}