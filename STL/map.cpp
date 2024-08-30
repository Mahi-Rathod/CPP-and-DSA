/*
    `map` is a part of the Standard Template Library(STL).
    it is an associative container that stores elements formed
    by a combination of a key value and a mapped value.
*/

#include<bits/stdc++.h>
#include<map>
using namespace std;

class Map{
    public:
        void insertInMap(map<int, int>&test, int key, int value){
            test.insert(pair<int, int>(key, value));
        }

        int accessValue(map<int, int>test, int key){
            return test[key];
        }

        int findEle(map<int, int>test, int key){
            auto it = test.find(key);
            if(it != test.end()){
                return it->second;
            }
            else{
                return false;
            }
        }

        bool deleteEle(map<int, int>&test, int key){
            if(findEle(test, key)){
                test.erase(key);
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    map<int, int>test;

    Map m;
    m.insertInMap(test,1, 10);
    m.insertInMap(test, 2, 20);
    m.insertInMap(test, 3, 30);
    m.insertInMap(test, 4, 40);
    m.insertInMap(test, 5, 50);

    for(const auto &entry: test){
        cout<<entry.first<<" : "<<entry.second<<endl;
    }

    int ele;
    cout<<"Enter key to find: ";
    cin>>ele;
    int found = m.findEle(test, ele);
    if(found >=0){
        cout<<found<<endl;
    }
    else{
        cout<<"Not Found...\n";
    }
    return 0;
}