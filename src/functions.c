#include <stdio.h>
#include <stdlib.h>
#include "func.h"

Node* search(Node* root, int k) {
	while(root && (k != root->key)) {
		if (k < root->key) root = root->lc;
		else root = root->rc;
	}
	return root;
}

Node* treeMinimum(Node *root) {
	while (root->lc) root = root->lc;
	return root;
}

Node* treeMaximum(Node *root) {
	while (root->rc) root = root->rc;
	return root;
}