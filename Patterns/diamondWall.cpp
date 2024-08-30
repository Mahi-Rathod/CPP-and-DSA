//           *
//         * * *
//       * * * * *       
//     * * * * * * *     
//   * * * * * * * * *   
// * * * * * * * * * * * 
//   * * * * * * * * *   
//     * * * * * * *     
//       * * * * *       
//         * * *
//           *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<=2*(n-i);k++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}