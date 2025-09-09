#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    char data;
    Node* left;
    Node* right;

    Node(char x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

// Pre-order traversal: DLR
void PreOrderTraversal(Node* tree) {
    if (tree != nullptr) {
        cout << tree->data << " ";
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);
    }
}

// In-order traversal: LDR
void InOrderTraversal(Node* tree) {
    if (tree != nullptr) {
        InOrderTraversal(tree->left);
        cout << tree->data << " ";
        InOrderTraversal(tree->right);
    }
}

// Post-order traversal: LRD
void PostOrderTraversal(Node* tree) {
    if (tree != nullptr) {
        PostOrderTraversal(tree->left);
        PostOrderTraversal(tree->right);
        cout << tree->data << " ";
    }
}

int main() {
    // Building the tree
    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left = new Node('D');
    root->left->right = new Node('E');

    cout << "Preorder Traversal: ";
    PreOrderTraversal(root);
    cout << "\n\n";

    cout << "Inorder Traversal: ";
    InOrderTraversal(root);
    cout << "\n\n";

    cout << "Postorder Traversal: ";
    PostOrderTraversal(root);
    cout << "\n\n";

    return 0;
}
