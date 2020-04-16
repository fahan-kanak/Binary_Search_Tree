#ifndef FUNC_H
#define FUNC_H

typedef struct node {
	int key;
	struct node *lc;
	struct node *rc;
}Node;

extern Node *root;

extern void inorderTraversal(Node *root);
extern void preorderTraversal(Node *root);
extern void postorderTraversal(Node *root);
extern Node* search(Node* root, int k);
extern Node* treeMinimum(Node *root);
extern Node* treeMaximum(Node *root);
extern Node* createNode(int v);
extern void insert(Node* root, Node* z);
extern Node* successor(Node* root, Node* n);
extern void deleteNode(Node *root, Node *z);
extern void deallocTree(Node* head);
#endif /* FUNC_H */