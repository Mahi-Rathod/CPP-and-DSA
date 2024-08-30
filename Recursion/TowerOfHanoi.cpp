
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void ToH(int num, char A = 'A', char B = 'B', char C = 'C') {
            if(num == 1){
                cout<<"Move 1 from "<<A<<" to "<<C<<endl;
                return;
            }
            ToH(num - 1, A, C, B);  //(Disk, Source, Auxillary, Destination)
            cout<<"Move "<<num<<" from "<<A<<" to "<<C<<endl;
            ToH(num - 1, B, A, C);
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    s.ToH(N);
    return 0;
}