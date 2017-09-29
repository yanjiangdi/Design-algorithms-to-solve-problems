#include <cstring>
#include <iostream>
#include <stdlib.h>
#define StringMax 100
using namespace std;

typedef struct BinaryTree {
	char data;
	BinaryTree *lchild;
	BinaryTree *rchild;
} BinaryTree;

void RebuildTree(BinaryTree *&Tree, char *PreOrder, char *InOrder, int len) {
	Tree = (BinaryTree *)malloc(sizeof(BinaryTree));
	if (Tree != NULL) {
		if (len <= 0) {
			Tree = NULL;
		return;
	} 	else {
		int index = 0;
		while (index < len && *(PreOrder) != *(InOrder + index))
			index++;
			Tree->data = *(PreOrder);
			RebuildTree(Tree->lchild, PreOrder + 1, InOrder, index);
			RebuildTree(Tree->rchild, PreOrder + 1 + index, InOrder + 1 + index, len - (index + 1));
		}
	}
	return;
}

void PostOrderTravese(BinaryTree *Tree) {
	if (Tree == NULL)
		return;
	else {
		PostOrderTravese(Tree->lchild);
		PostOrderTravese(Tree->rchild);
		cout << Tree->data;
	}
}

int main() {
	char PreOrder[StringMax], InOrder[StringMax];
	while (cin >> PreOrder >> InOrder) {
		BinaryTree *tree;
		int length = strlen(PreOrder);
		RebuildTree(tree, PreOrder, InOrder, length);
		PostOrderTravese(tree);
		cout << endl;
	}
	return 0;
}
