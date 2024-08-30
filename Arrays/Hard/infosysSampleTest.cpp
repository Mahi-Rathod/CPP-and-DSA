#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //This Approach Will Take O(N2) Time CompleXity and O(N) Space Complexity
        int defeatedMonster(vector<int>power, vector<int>bonus, int IP, int N){
            int defeatedMonsterCount=0;
            map<int, int>mpb;
            for(int i=0;i<N;i++){
                mpb[power[i]] += bonus[i];
            }
            cout<<"\n";
            int run = 0;
            while(run<N){
                int minPowerMon = -1;
                int bonusMons = 0;
                for(auto &entry : mpb){
                    if(entry.first <= IP){
                        minPowerMon = entry.first;
                        bonusMons = entry.second;
                    }
                }
                if(minPowerMon <= 0){
                    return defeatedMonsterCount;
                }
                else{
                    mpb.erase(minPowerMon);
                    IP +=(bonusMons);
                    defeatedMonsterCount ++;
                }
                run++;
            }
            return defeatedMonsterCount;
        }

        //This Approach Will take 
        int greedyOptimalDefeatedMonster(vector<int>power, vector<int>bonus, int IP, int N){
            vector<pair<int, int>>mpb;
            int countDefeatedMonster = 0;
            for(int i=0;i<N;i++){
                mpb.push_back(make_pair(power[i], bonus[i]));
            }
            sort(mpb.begin(), mpb.end());

            for(const auto &each : mpb){
                if(each.first<=IP){
                    countDefeatedMonster ++;
                    IP += each.second;
                }
            }

            return countDefeatedMonster;
        }
};

int main(){
    int N, IP=0;
    cin>>N;
    cin>>IP;
    vector<int>power(N), bonus(N);
    for(int i=0;i<N;i++){
        cin>>power[i];
    }
    for(int i=0;i<N;i++){
        cin>>bonus[i];
    }

    Solution s;
    cout<<s.defeatedMonster(power, bonus, IP, N)<<endl;
    cout<<s.greedyOptimalDefeatedMonster(power, bonus, IP, N)<<endl;

    return 0;
}