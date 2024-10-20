#include <iostream>
#include <vector>
using namespace std;

#define int int long
const int N = 1e5 + 2, MOD = 1e9 + 7;


vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b){
    int n = a.size();
    vector<vector<int>> ans(n, vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return ans;
}

vector<vector<int>> matrixExpo(vector<vector<int>> &a, int n){
    if(n==0){
        int size = a.size();
        vector<vector<int>> ans (size, vector<int>(size, 0));
        for(int i=0; i<size; i++){
            ans[i][i] = 1;
        }
        return ans;
    }
    if(n==1){
        return a;
    }

    vector<vector<int>>temp = matrixExpo(a, n/2);
    vector<vector<int>>ans = multiply(temp, temp);

    if(n&1){
        ans = multiply(ans, a);
    }
    return ans;
}

signed main()
{
    int n;
    cin >> n;
    vector<vector<int>> a = {{1, 1}, {1, 0}};

    vector<vector<int>> ans = matrixExpo(a, n);
    int size = ans.size();
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout<<ans[i][j] <<" ";
        }
        cout<<"\n";
    }
    cout<<ans[0][1]<<endl;
    return 0;
}