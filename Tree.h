#pragma once
#include "TreeNode.h"
#include "LinkedList.h"

class Tree
{
	TreeNode* root;
	int nodecount;
	LinkedList* ll_list;
	TreeNode* insertNode(TreeNode* node, int val);
	void inordertraversal(TreeNode* root);
	void InOrderArray(TreeNode* t_root, int* i_arr, int* index);
	void InOrderLinkList(TreeNode* t_root);

public:
	Tree();
	~Tree();
	void insert(int val);
	void inorder();
	int getNodecount();
	int* inorderInserttoArray();
	LinkedList* inorderInserttoLinkedList();
};

