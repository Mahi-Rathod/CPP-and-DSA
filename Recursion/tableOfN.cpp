#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void tableOfN(int num, int mul = 10){
        if (mul == 0)
            return;

        tableOfN(num, mul - 1);   // Recursive call with decreased multiplier
        cout << num * mul << " "; // Print the result in reverse order
    }
};

int main()
{
    int N;
    cin >> N;
    Solution s;
    s.tableOfN(N);
    return 0;
}