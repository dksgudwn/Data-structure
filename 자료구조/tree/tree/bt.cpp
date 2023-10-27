#include "bt.h"

BTreeNode* MakeBTreeNode(void)
{
	//make binary tree
	BTreeNode* nd = new BTreeNode;
	//initialize
	nd->left = NULL;
	nd->right = NULL;
	//return pointer
	return nd;

}
void DeleteBTreeNode(BTreeNode* bt) {
	delete bt;
}
int GetData(BTreeNode* bt) {
	return bt->data;
}
void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in left link, delete it
	if (main->left != NULL)delete main->left;
	main->left = sub;
	// put sub in left link of main

}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in right link, delete it
	if (main->right != NULL)delete main->right;
	main->right = sub;
	// put sub in right link of main

}
void PreorderTraverse(BTreeNode* bt)
{
	// ��������
	if (bt == NULL)return;
	// �湮�� ��� ���
	cout << bt->data;
	// ������� �湮: ����
	PreorderTraverse(bt->left);
	// ������� �湮: ������
	PreorderTraverse(bt->right);
}
void InorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)return;

	InorderTraverse(bt->left);
	cout << bt->data;
	InorderTraverse(bt->right);

}
void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)return;

	InorderTraverse(bt->left);
	InorderTraverse(bt->right);
	cout << bt->data;

}
