#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

BST* createNode(BST* root, int value) {
	
	if (root == NULL) {
		BST* curr = (BST*)malloc(sizeof(BST));
		curr->value = value;
		curr->left = NULL;
		curr->right = NULL;
		return curr;
	}
	else if (value < root->value) {
		root->left = createNode(root->left, value);
	}
	else if (value > root->value) {
		root->right = createNode(root->right, value);
	}
	else {
		printf("Node already exists!\n");
	}
	
	return root;
}

void printInOrder(BST* root) {
	BST* curr = root;
	if (curr == NULL)
		return;
	printInOrder(curr->left);
	printf("%d ", root->value);
	printInOrder(curr->right);
}

void printPreOrder(BST* root) {
	BST* curr = root;
	if (curr == NULL)
		return;
	printf("%d ", root->value);
	printPreOrder(curr->left);
	printPreOrder(curr->right);
}

void printPostOrder(BST* root) {
	BST* curr = root;
	if (curr == NULL)
		return;
	printPostOrder(curr->left);
	printPostOrder(curr->right);
	printf("%d ", root->value);
}

int getHeight(BST* root) {
	BST* curr = root;
	if (curr == NULL) {
		return -1;
	}
	else {
		int leftHeight = getHeight(curr->left);
		int rightHeight = getHeight(curr->right);
		if (leftHeight > rightHeight) {
			return leftHeight + 1;
		}
		else
			return rightHeight + 1;
	}

}

int getNumberOfNodes(BST* root) {
	BST* curr = root;
	if (curr == NULL) {
		return 0;
	}
	return (1 + getNumberOfNodes(curr->left) + getNumberOfNodes(curr->right));
}



int getNumberOfLeaves(BST* root) {
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
		return 1;
	else
		return getNumberOfLeaves(root->left) + getNumberOfLeaves(root->right);
}