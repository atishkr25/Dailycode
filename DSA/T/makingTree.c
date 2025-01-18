#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node * makeNode(int x) {
    struct Node *p;
    p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void PreOrderTraversal(struct Node* tree) {
    if (tree != NULL) {
        printf("%d ", tree->data);
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);
    }
}

void InOrderTraversal(struct Node* tree) {
    if (tree != NULL) {
        InOrderTraversal(tree->left);
        printf("%d ", tree->data);
        InOrderTraversal(tree->right);
    }
}

void PostOrderTraversal(struct Node* tree) {
    if (tree != NULL) {
        PostOrderTraversal(tree->left);
        PostOrderTraversal(tree->right);
        printf("%d ", tree->data);
    }
}

void createTree(struct Node **tree) {
    int x, choice;

    if (*tree == NULL) {
        return;
    }

    // Left Child
    printf("Does the left of %d exist (1/0): ", (*tree)->data);
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter the data for the left node: ");
        scanf("%d", &x);
        struct Node *leftNode =makeNode(x);
        (*tree)->left = leftNode;
        createTree(&leftNode);
    }

    // Right Child
    printf("Does the right of %d exist (1/0): ", (*tree)->data);
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter the data for the right node: ");
        scanf("%d", &x);
        struct Node *rightNode = makeNode(x);
        (*tree)->right = rightNode;
        createTree(&rightNode);
    }
}

int main() {
    struct Node* root;
    int x;

    printf("Enter the information for the root node: ");
    scanf("%d", &x);
    root = makeNode(x);

    createTree(&root);

    // Applying different operations
    printf("\n Preorder Traversal: ");
    PreOrderTraversal(root);
    printf("\n");

    printf("\n Inorder Traversal: ");
    InOrderTraversal(root);
    printf("\n");

    printf("\n Postorder Traversal: ");
    PostOrderTraversal(root);
    printf("\n");

    return 0;
}
