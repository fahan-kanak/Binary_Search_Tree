/* 
 * File:   tree.c
 * Author: farhan
 *
 * Created on April 14, 2020, 8:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "func.h"

#define MENU printf("\nPress 1 to search node\nPress 2 to see Minimum\nPress 3 to see Maximum\nPress 4 to see Inorder Successor\nPress 5 to delete node\nPress any other key to exit\n");
#define CHOICE printf("\nEnter choice: ");
#define VALUE printf("\nEnter value to search: ");
#define SUCC printf("\nEnter node: ");
#define DEL printf("\nEnter value to delete: ");

Node* root = NULL;

int main(int argc, char** argv) {
	FILE *fp;
	fp = fopen("src/input_files/file_4", "r");
	int x;
	fscanf(fp, "%d", &x);
	if (x == -1) {
		fclose(fp);
		goto exit;
	}
	root = createNode(x);
	while (true) {
		fscanf(fp, "%d", &x);
		if (x == -1) break;
		insert(root, createNode(x));
	}
	fclose(fp);
	printf("The inorder traversal is: ");
	inorderTraversal(root);
	printf("\n");
	printf("The preorder traversal is: ");
	preorderTraversal(root);
	printf("\n");
	printf("The postorder traversal is: ");
	postorderTraversal(root);
	printf("\n");
	label: MENU
	CHOICE
	int choice;
	Node *ptr = NULL;
	fscanf(stdin, "%d", &choice);
	getchar();
	switch (choice) {
		case 1:
			VALUE
			scanf("%d", &x);
			getchar();
			ptr = search(root, x);
			ptr ? printf("\nNode found!!!\n") : printf("\nNode NOT found!!!\n");
			goto label;
		case 2:
			ptr = treeMinimum(root);
			ptr ? printf("\nMinimum value is: %d\n", ptr->key) : printf("\nTree is empty!!!\n");
			goto label;
		case 3:
			ptr = treeMaximum(root);
			ptr ? printf("\nMaximum value is: %d\n", ptr->key) : printf("\nTree is empty!!!\n");
			goto label;
		case 4:
			SUCC
			scanf("%d", &x);
			getchar();
			ptr = successor(root, search(root, x));
			ptr ? printf("\nThe inorder successor of %d is %d.\n", x, ptr->key) : printf("\nNo inorder successor exists for %d.\n", x);
			goto label;
		case 5:
			DEL
			scanf("%d", &x);
			getchar();
			deleteNode(root, search(root, x));
			printf("The inorder traversal is: ");
			inorderTraversal(root);
			printf("\n");
			printf("The preorder traversal is: ");
			preorderTraversal(root);
			printf("\n");
			printf("The postorder traversal is: ");
			postorderTraversal(root);
			printf("\n");
			goto label;
		default:
			printf("\nBye!!!");
			deallocTree(root);
			goto exit;
	}
	
	exit: return 0;
}

