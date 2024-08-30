//check whether kth bit of a number is set bit => 1 or not

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        //Given Approach takes O(logn) time 
        bool isSetBit(int num, int k){
            while(k){
                num = num>>1;
                k--;
            }
            return (num&1 !=0?true:false);
        }

        //optimized approach
        bool checkKthBit(int num, int k){
            return (num>>k)&1;
        }

};

int main(){
    int num,k;
    cin>>num>>k;
    Solution s;
    cout<<(s.isSetBit(num, k)?"YES":"NO")<<endl;
    cout<<(s.checkKthBit(num, k)?"YES":"NO")<<endl;
    return 0;  
}