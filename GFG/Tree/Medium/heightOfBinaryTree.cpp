#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            data = val;
            left = nullptr;
            right= nullptr;
        }
};

Node *levelOrderInsertion(int arr[], int i, int n){
    Node *root = nullptr;
    
    if(i<n){
        root = new Node(arr[i]);

        root->left = levelOrderInsertion(arr, 2*i + 1, n);
        root->right= levelOrderInsertion(arr, 2*i + 2, n);
    }

    return root;
}

void inorderTraversal(Node *root){
    if(root == nullptr){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int heightOfTree(Node *root){
    if(root == nullptr){
        return 0;
    }
    int leftHeight = heightOfTree(root->left)+1;
    int rightHeight= heightOfTree(root->right)+1;

    return max(leftHeight, rightHeight);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14, 15, 16};
    Node *root = levelOrderInsertion(arr, 0, 16);

    cout<<"Inorder Traversal"<<endl;
    inorderTraversal(root);

    cout<<"\nheightOfTree: ";
    cout<<heightOfTree(root)<<endl;
    return 0;
}