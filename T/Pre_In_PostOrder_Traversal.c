#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node * makeNode(char x)
{
    struct Node *p;
    p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;

};

struct Node* PreOrderTraversal(struct Node* tree){
    if(tree != NULL){
        printf("%C ", tree->data);
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);

    }
}
//LDR
struct Node* InOrderTraversal(struct Node* tree){
    if(tree != NULL){
        PreOrderTraversal(tree->left);
        printf("%C ", tree->data);
        PreOrderTraversal(tree->right);

    }
}
//LRD
struct Node* PostOrderTraversal(struct Node* tree){
    if(tree != NULL){
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);
        printf("%C ", tree->data);

    }
}

int main(){
    struct Node* root;
    root = NULL;
    root = makeNode('A');
    root->left = makeNode('B');   
    root->right = makeNode('C');   
    root->left->left = makeNode('D');  
    root->left->right = makeNode('E'); 

    //aplying diff operations 
    PreOrderTraversal(root);
    printf("\n\n"); 

    InOrderTraversal(root); 
    printf("\n\n"); 

    PostOrderTraversal(root); 
    printf("\n\n"); 

}
	