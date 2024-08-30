//Pyramid Wall Program
//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}