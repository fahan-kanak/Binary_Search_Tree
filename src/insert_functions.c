#include <stdio.h>
#include <stdlib.h>
#include "func.h"

Node* createNode(int v) {
	Node *n;
	n = (Node *)malloc(sizeof(Node));
	n->key = v;
	n->lc = NULL;
	n->rc = NULL;
	return n;
}

void insert(Node* root, Node* z) {
	Node* y = NULL;
	while (root) {
		y = root;
		if (z->key < root->key) root = root->lc;
		else root = root->rc;
	}
	if (!y) root = z; // Tree was empty
	else if (z->key < y->key) y->lc = z;
	else y->rc = z;
}