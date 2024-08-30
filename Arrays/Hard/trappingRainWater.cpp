//Rain Water Trapping Questions

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>bluildings(n);
    
    for(int i=0;i<n;i++){
        cin>>bluildings[i];
    }
    
    // vector<int>tallLeft(n);
    vector<int>tallRight(n);
    int maxRight = INT_MIN;
    
    for(int i=n-1;i>=0;i--){
        tallRight[i] = max(maxRight, bluildings[i]);
        maxRight = max(maxRight, bluildings[i]);
    }
    
    int area = 0;
    int maxLeft = INT_MIN;
    for(int i=0;i<n;i++){
        if(maxLeft<bluildings[i]){
            maxLeft = bluildings[i];
        }
        
        area += min(maxLeft, tallRight[i]) - bluildings[i];
    }
    
    cout<<area<<endl;
	return 0;
}