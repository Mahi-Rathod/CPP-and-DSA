#include <bits/stdc++.h>
using namespace std;

struct myHash {
    int BUCKET;
    list<int>*table;

    myHash(int b): BUCKET(b){
        table = new list<int>[BUCKET];
    }

    void insert(int key){
        int i= key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key){
        int i = key % BUCKET;
        table[i].remove(key);
    }

    void displayHash(){
        for(int i=0;i<BUCKET;i++){
            cout<<i;
            for(auto x:table[i]){
                cout<<"-->"<<x;
            }
            cout<<endl;
        }
    }
};

int main() {
    int N, BUCKET;
    cin >> N >> BUCKET;
    myHash hashTable(BUCKET);
    

    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        hashTable.insert(temp);
    }

    hashTable.displayHash();
    return 0;
}