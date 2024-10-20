#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;

        Node (int val){
            data = val;
            left = nullptr;
            right= nullptr;
        }
};

class Solution {
    public:
        void inorderTraversal(Node *root) {
            if(root!=nullptr){
                inorderTraversal(root->left);
                cout<<root->data<<" ";
                inorderTraversal(root->right);
            }
        }

        void preorderTraversal(Node *root){
            if(root!=nullptr){
                cout<<root->data<<" ";
                preorderTraversal(root->left);
                preorderTraversal(root->right);
            }
        }

        void postorderTraversal(Node *root){
            if(root != nullptr){
                postorderTraversal(root->left);
                postorderTraversal(root->right);
                cout<<root->data<<" ";
            }
        }

        vector<int>inorder(Node *root){
            if(root == nullptr){
                return {};
            }

            vector<int>leftTree = inorder(root->left);
            leftTree.push_back(root->data);
            vector<int>rightTree= inorder(root->right);

            leftTree.insert(leftTree.end(), rightTree.begin(), rightTree.end()); 

            return leftTree;
        }
        
        vector<int>preorder(Node *root){
            if(root == nullptr){
                return {};
            }

            vector<int>res = {root->data};
            vector<int>leftTree = preorder(root->left);
            vector<int>rightTree= preorder(root->right);

            res.insert(res.end(), leftTree.begin(), leftTree.end());
            res.insert(res.end(), rightTree.begin(), rightTree.end());

            return res;
        }

        vector<int>postorder(Node *root){
            if(root == nullptr){
                return {};
            }

            vector<int>leftTree = postorder(root->left);
            vector<int>rightTree= postorder(root->right);
            leftTree.insert(leftTree.end(), rightTree.begin(), rightTree.end());
            leftTree.push_back(root->data);


            return leftTree;
        }

        void printArray(vector<int>arr){
            for(auto i : arr){
                cout<<i<<" ";
            }
            cout<<endl;
        }
};


int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right= new Node(30);

    Solution s;
    cout<<"Inorder Traversal:- ";
    s.inorderTraversal(root);
    cout<<"\nPreorder Traversal:- ";
    s.preorderTraversal(root);
    cout<<"\nPost order traversal:- ";
    s.postorderTraversal(root);

    cout<<"\nInOrdered Traversed Array : - "<<endl;
    s.printArray(s.inorder(root));
    
    cout<<"\nPreOrdered Traversed Array : - "<<endl;
    s.printArray(s.preorder(root));

    cout<<"\nPostOrdered Traversed Array : - "<<endl;
    s.printArray(s.postorder(root));

    return 0;
}