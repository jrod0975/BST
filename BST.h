#ifndef BST_H
#define BST_H


typedef struct BST{
	int value;
	struct BST* left;
	struct BST* right;
}BST;


BST* createNode(BST* root, int value);

void printInOrder(BST* root);
void printPreOrder(BST* root);
void printPostOrder(BST* root);
int getHeight(BST* root);
int getNumberOfNodes(BST* root);
int getNumberOfLeaves(BST* root);



#endif
