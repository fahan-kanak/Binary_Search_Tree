#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void deallocTree(Node* head) {
	if (head == NULL) return;
	deallocTree(head->lc);
	deallocTree(head->rc);
	free(head);
}

void inorderTraversal(Node *root) {
	if (root == NULL) return;
	inorderTraversal(root->lc);
	printf("%d ", root->key);
	inorderTraversal(root->rc);
}

void preorderTraversal(Node *root) {
	if (root == NULL) return;
	printf("%d ", root->key);
	preorderTraversal(root->lc);
	preorderTraversal(root->rc);
}

void postorderTraversal(Node *root) {
	if (root == NULL) return;
	postorderTraversal(root->lc);
	postorderTraversal(root->rc);
	printf("%d ", root->key);
}