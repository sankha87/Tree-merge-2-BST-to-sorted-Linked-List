#include "Tree.h"

TreeNode* Tree::insertNode(TreeNode* node, int val)
{
	if (node == NULL)
		node = new TreeNode(val);

	else
	{
		if (node->getData() < val)
		{
			TreeNode* temp = insertNode(node->getRight(), val);
			node->setRight(temp);
		}
		else
		{
			TreeNode* temp = insertNode(node->getLeft(), val);
			node->setLeft(temp);
		}
	}
	return node;
}

void Tree::inordertraversal(TreeNode * root)
{
	if (root == NULL)
		return;
	else
	{
		inordertraversal(root->getLeft());
		std::cout << root->getData() << " ";
		inordertraversal(root->getRight());
	}
}

Tree::Tree()
{
	this->root = NULL;
	this->nodecount = 0;
    this->ll_list = new LinkedList();
}


Tree::~Tree()
{
	delete this->root;
}

void Tree::insert(int val)
{
	this->root = insertNode(this->root, val);
	nodecount++;
}

void Tree::inorder()
{
	inordertraversal(this->root);
}

int Tree::getNodecount()
{
	return nodecount;
}

int* Tree::inorderInserttoArray()
{
	int* p_arr = new int[this->nodecount];
	int index = 0;
	InOrderArray(this->root, p_arr, &index);
	return p_arr;
}

LinkedList* Tree::inorderInserttoLinkedList()
{
	InOrderLinkList(this->root);
	return this->ll_list;
}

void Tree::InOrderArray(TreeNode * t_root, int * i_arr, int * index)
{
		if (t_root == NULL)
			return;
		else
		{
			InOrderArray(t_root->getLeft(), i_arr, index);
			i_arr[*index] = t_root->getData();
			(*index)++;
			InOrderArray(t_root->getRight(), i_arr, index);
		}
}

void Tree::InOrderLinkList(TreeNode* t_root)
{
	if (t_root == NULL)
		return;
	else
	{
		InOrderLinkList(t_root->getLeft());
		this->ll_list->insert(t_root->getData());
		InOrderLinkList(t_root->getRight());
	}
}
