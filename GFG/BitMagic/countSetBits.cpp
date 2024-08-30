//count total number of set bits in from given number

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        //This Approach takes O(log(no. of bits in number)) 
        //which is not efficient for bigger numbers

        int countSetBits(int num) {
            int count = 0;
            while(num){
                count += (num&1);
                num>>=1;
            }

            return count;
        }

        /*
        Brian Kernighans Algorithm
        in this approach we only visits set bits. therefore it is efficient solution.
        The Idea is we unset the bit after visiting it.
        when we bitwise and (&) number with num-1 it unset the rightmost set bit. 
        TC - O(no. of setBits);
        */

        int brianKernighansAlgo(int num){
            int count = 0;
            while(num){
                num &= (num-1);  //num = num & (num -1);
                count ++;
            }

            return count;
        }

        /*
            LookUp Table Method
            in this method we maintain one array containing set bits of numbers with stage.
            for lookUp table initialization we use Brian Kerninghans algo.
            total time complexity of this approch is equal to Brian Kernighans Algorithm but we assume that look table is initialized once.

            TC - O(1);
            SC - O(n);
        */


        int lookUpTableMethod(int num){
            int tbl[256];
            tbl[0]=0;
            for(int i=1;i<256;i++){
                tbl[i] = tbl[i&(i-1)]+1;
            }
            return (tbl[(num&255)] + tbl[(num>>8)&255] + tbl[(num>>16)&255] + tbl[(num>>24)]);
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    cout <<"Naive Solution:- " << s.countSetBits(N) << endl;
    cout <<"Brian and Kernighans:- " << s.brianKernighansAlgo(N) << endl;
    cout <<"Look Up Table Method:- " << s.lookUpTableMethod(N) << endl;
    return 0;
}