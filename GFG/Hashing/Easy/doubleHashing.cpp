/*
    Double Hashing is Technique in which we use another one hash funcion if collison is occurred at first hash.

    in this problem we are using below hash funtion
     1>h1(k) = key % hashSize;

     2>h2(k) = 1 + key % hashSize;

*/

#include <bits/stdc++.h>
using namespace std;

class HashNode{
    public:
        int key;
        int value;
        HashNode():key(-1), value(-1){};
        HashNode(int k, int v):key(k), value(v){};
};

class myHash{
    private:
        HashNode **table;
        HashNode *dummy;
        int size, cap;
    
        int hashFunction1(int key){
            return key%cap;
        }

        int hashFunction2(int key){
            return (1 + (key % cap))%cap;
        }

        //here we creating probe because we need this function in all operations
        int probe(int key){
            int f1 = hashFunction1(key);
            int f2 = hashFunction2(key);
            int i = 0;
            while(i<cap){
                int j = (f1 + (i*f2)) % cap;
                if(table[j] == nullptr || table[j]->key == -1 || table[j]->key == key){
                    return j;
                }
                i++;
            }
            return -1;
        }
    public:
        myHash(int bucketSize):cap(bucketSize),size(0){
            table = new HashNode*[cap];
            dummy = new HashNode(-1, -1);
            for(int i=0;i<cap;i++){
                table[i] = nullptr;
            }
        }

        bool insert(int key, int value){
            int index = probe(key);
            if(index == -1){
                return false ; // table is full
            }
            if(table[index] == nullptr || table[index]->key == -1){
                delete table[index];
                table[index] = new HashNode(key, value);
            }
            else{
                table[index]->value = value;
            }
            size++;
            return true;
        }

        void displayHashTable(){
            for (int i = 0; i < cap; i++) {
                if (table[i] == nullptr || table[i] == dummy) {
                    continue;
                } else {
                    cout << i << ": (" << table[i]->key << ", " << table[i]->value << ")" << endl;
                }
            }
        }

};

class Solution {
    public:
        void doubleHashing(vector<int>&hashTable, int hashSize, vector<int>arr, int num) {
            for(int i=0;i<num;i++){
                int j=0;
                while(j<hashSize){
                    int key = ((arr[i] % hashSize) + (j * (1+ (arr[i] % hashSize)))) % hashSize;
                    if(hashTable[key] == arr[i] || hashTable[key] == -1){
                        cout<<key<<" ";
                        hashTable[key] = arr[i];
                        break;
                    }
                    j++;
                }
            }
            cout<<endl;
        }
};

int main() {
    // int N, hashSize;
    // cout<<"Enter No of elements in array: ";
    // cin>>N;
    // vector<int>arr(N);
    // cout<<"Enter Array Elements: "<<endl;
    // for(int i=0;i<N;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Enter HashSize: "<<endl;
    // cin>>hashSize;
    
    // vector<int>hashTable(hashSize, -1);

    // Solution s;
    // s.doubleHashing(hashTable, hashSize, arr, N);

    // for(int i=0;i<hashSize;i++){
    //     cout<<hashTable[i]<<" ";
    // }

    myHash hashTable(7);
    hashTable.insert(10,10);
    hashTable.insert(45,10);
    hashTable.insert(11,110);

    hashTable.displayHashTable();
    return 0;
}