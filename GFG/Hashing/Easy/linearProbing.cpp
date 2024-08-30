#include<iostream>
using namespace std;
#include<vector>

struct myHash{
    int *hashTable;
    int cap, size;

    myHash(int b){
        cap = b, size=0;
        hashTable = new int[cap];
        for(int i=0;i<cap;i++){
            hashTable[i] = -1;
        }
    }

    int hash(int key){
        return key % cap;
    }
    bool insert(int key){
        if(size == cap) return false;

        int i = hash(key);
        while(hashTable[i] != -1 && hashTable[i] != -2 && hashTable[i] != key){
            i = (i+1) % cap;
        }

        if(hashTable[i] == key) return false;
        else{
            hashTable[i] = key;
            size ++;
            return true;
        }
    }

    bool search(int key){
        if(size == 0) return false;

        int i = hash(key);

        while(hashTable[i] != -1 && hashTable[i] !=key){
            i = (i+1) % cap;
        }

        if(hashTable[i] == key){
            return true;
        }
        return false;
    }

    bool deleteElements(int key){
        int i= hash(key);
        while (hashTable[i] != -1){
            if(hashTable[i] == key){
                hashTable[i] = -2;
                size--;
                return true;
            }
            i = (i+1) % cap;
        }
        
        return false;
        
    }
    void diplayHashTable(){
        for(int i=0;i<cap;i++){
            cout<<hashTable[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int N, hashSize;
    cin>>N>>hashSize;
    myHash hashTable(hashSize);
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }


    for(int i=0;i<N;i++){
        hashTable.insert(arr[i]);
    }

    cout<<endl;
    hashTable.diplayHashTable();
    cout<<hashTable.search(92)<<endl;
    cout<<hashTable.deleteElements(92)<<endl;
    cout<<hashTable.search(92)<<endl;
    hashTable.diplayHashTable();
    cout<<hashTable.insert(92)<<endl;
    hashTable.diplayHashTable();
    return 0;
}