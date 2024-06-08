#include<bits/stdc++.h>
using namespace std;

class CountFrequency{
    public:
        map<int, int>Frquency(vector<int>arr, int N){
            map<int, int>freq;
            for(int i=0;i<N;i++){
                freq[arr[i]]++;
            }
            return freq;
        }
};

int main(){
    int N;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    CountFrequency cf;
    map<int, int>freq = cf.Frquency(arr, N);
    for(auto x:freq){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;    
}