#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;

        Node(int val){
            data = val;
            left = right = nullptr;
        }
};

class Solution {
    public:
        int nodeAtDistK(Node *root) {
            // TODO: Implement the method
        }
};

int main() {

    Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(8);

    Solution s;
    cout << s.nodeAtDistK(root) << endl;
    return 0;
}