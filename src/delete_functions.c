#include <stdlib.h>
#include "func.h"

Node* getSuccessor(Node* root, Node* n, Node* succ) {
	if (!root || (root->key == n->key)) return succ;
	if (n->key < root->key) {
		succ = root;
		return getSuccessor(root->lc, n, succ);
	}
	return getSuccessor(root->rc, n, succ);
}

Node* successor(Node* root, Node* n) {
	Node* temp = treeMaximum(root); 
	if (n->key == temp->key) return NULL;
	if (n->rc) return treeMinimum(n->rc);
	return getSuccessor(root, n, NULL);
}

Node* getParent(Node* root, Node* z) {
	if (((root->lc) && (root->lc->key == z->key)) || ((root->rc) && (root->rc->key == z->key))) return root;
	if (z->key < root->key) return getParent(root->lc, z);
	return getParent(root->rc, z);
}

void deleteComplexNode(Node* root, Node* z) {
	Node* succ = successor(root, z);
	int temp = succ->key;
	if (!succ->lc && !succ->rc) {
		Node* par = getParent(root, succ);
		z->key = succ->key;
		if ((par->lc) && (par->lc->key == succ->key)) {
			free(par->lc);
			par->lc = NULL;
		} else {
			free(par->rc);
			par->rc = NULL;
		}
		return;
	}
	deleteComplexNode(root, succ);
	z->key = temp;
}

void deleteNode(Node *root, Node *z) {
	if (!z->lc && !z->rc) {
		Node* par = getParent(root, z);
		if ((par->lc) && (par->lc->key == z->key)) {
			free(par->lc);
			par->lc = NULL;
		} else {
			free(par->rc);
			par->rc = NULL;
		}
	} else if (!z->lc && z->rc) {
		z->key = z->rc->key;
		free(z->rc);
		z->rc = NULL;
	} else if (z->lc && !z->rc) {
		z->key = z->lc->key;
		free(z->lc);
		z->lc = NULL;
	} else deleteComplexNode(root, z);
}
