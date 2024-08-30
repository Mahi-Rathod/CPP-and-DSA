#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getFirstSetBit(int Number){
            int i=0;
            while(Number){
                if((Number & 1) == 1) return i+1;
                Number = Number >> 1;
                i++;
            }
            return 0;
        }
};

int main(){
    int number;
    cin>>number;

    Solution s;
    cout<<s.getFirstSetBit(number)<<endl;

    return 0;
}