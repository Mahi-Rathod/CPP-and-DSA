#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

class linkedList{
    private:
        Node *head;

    public:
        linkedList(){
            head = nullptr;
        }

        Node *getNode(){
            return head;
        }

        Node *setNode(Node *newNode){
            head = newNode;
        }

        void insertAtFront(int val){
            
        }
};

class Solution {
    public:
        int (int num) {
            // TODO: Implement the method
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    return 0;
}