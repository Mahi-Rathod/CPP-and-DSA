#include<iostream>
using namespace std;

int main(){
    //2D Array or Matrix
    int Matrix[3][3] = { {1,2,3},
                        {4,5,6},
                        {7,8,9}
                      };
    int arr [3][3]  = {1,2,3,4,5,6,7,8,9}; // This aproach also acceptable 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}