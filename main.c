#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

int main(int argc, char* argv[]) {
	BST* root = NULL;
	int height;
	int leaves = 0;
	int nodes = 0;

	printf("BST is empty.\n");
	printf("The height of the tree is: -1\n");
	printf("The number of nodes are: %d\n", nodes);
	printf("The number of leaves are: %d\n", leaves);

	int condition = 0;
	while (condition != -999) {
		int condition;
		int value;
		printf("Enter a value to add to the tree (-999 to stop): ");
		scanf("%d", &condition);

		if (condition == -999)
			break;
		else {
			value = condition;
			root = createNode(root, value);
		}
		height = getHeight(root);
		nodes = getNumberOfNodes(root);
		leaves = getNumberOfLeaves(root);

		printf("The height is: %d\n", height);
		printf("Number of nodes is: %d\n", nodes);
		printf("The number of leaves is: %d\n\n\n", leaves);

	}
	printf("Pre Order:\n");
	printPreOrder(root);
	printf("\nIn Order:\n");
	printInOrder(root);
	printf("\nPost Order:\n");
	printPostOrder(root);
	printf("\n");

}