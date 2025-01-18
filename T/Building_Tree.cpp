#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        struct Node* left;
        struct Node* right;

    Node(int x){
        // here we are using comstruction, ye aise work krega jab v koi node bane to is type se bane , jiska left=NULL hojaye and right = NULL hojaye
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node *BuildTree(Node* root) {
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    if(data == -1) return NULL;

    root = new Node(data);

    cout<<"Enter data for inseting in left of "<< data <<endl;
    root->left = BuildTree(root->left);

    cout<<"Enter data for inseting in right of"<< data <<endl;
    root->right = BuildTree(root->right);

    return root;
    
}
Node* PreOrderTraversal(Node* tree){
    if(tree != NULL){
        cout<< tree->data <<" ";
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);

    }
}

int main(){
    Node* root = NULL;

    //creating a root
    root = BuildTree(root);

    cout<<"Preorder Traversal: "<<endl;
    PreOrderTraversal(root);
    
}