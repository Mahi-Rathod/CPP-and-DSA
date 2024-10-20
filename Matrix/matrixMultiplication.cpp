#include<iostream>
#include<vector>
using namespace std;

void matMul(vector<vector<int>>mat1, int m1, int n1, vector<vector<int>>mat2, int m2, int n2){
    vector<vector<int>>res;
    for(int i=0;i<m1;i++){
        vector<int>v;
        for(int j=0;j<n2;j++){
            int temp=0;
            for(int k=0;k<n1;k++){
                temp += (mat1[i][k] * mat2[k][j]);
            }
            v.push_back(temp);
        }
        res.push_back(v);
    }

    cout<<"Result of matrix multiplication is: "<<endl;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<res[i][j]<<" ";
        }
    }

}

int main(){
    int m1,n1,m2,n2;
    vector<vector<int>>mat1;
    vector<vector<int>>mat2;
    cout<<"rows and col of Matrix A: ";
    cin>>m1>>n1;
    cout<<"Enter the Matrix A: \n";
    for(int i=0;i<m1;i++){
        vector<int>v;
        for(int j=0;j<n1;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        mat1.push_back(v);
    }

    cout<<"rows and column of the Matrix B: ";
    cin>>m2>>n2;

    for(int i=0;i<m2;i++){
        vector<int>v;
        for(int j=0;j<n2;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        mat2.push_back(v);
    }

    if(n1!=m2){
        cout<<"We Cant Perform Matrix Multiplication. "<<endl;
    }
    else{
        matMul(mat1,m1,n1,mat2,m2,n2);
    }
    return 0;
}