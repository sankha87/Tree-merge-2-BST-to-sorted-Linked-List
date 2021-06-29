#include "Tree.h"
#include "Utilities.h"
#include "LinkedList.h"
#include <conio.h>
using namespace std;

int main()
{
	Tree* t1 = new Tree();
	t1->insert(8);
	t1->insert(2);
	t1->insert(1);
	t1->insert(10);


	Tree* t2 = new Tree();
	t2->insert(15);
	t2->insert(13);
	t2->insert(6);
	t2->insert(0);
	t2->insert(4);
	t2->insert(7);
	t2->insert(9);

	cout << "inorder traversal (t1)\n";
	t1->inorder();
	cout << "\ninorder traversal (t2)\n";
	t2->inorder();


	int *arr1 = t1->inorderInserttoArray();
	int *arr2 = t2->inorderInserttoArray();
	int *arr;
	cout << "\n\n";
	cout << "Elements of the 1st tree"<<endl;
	for (int i = 0; i < t1->getNodecount(); i++)
		cout << arr1[i] <<" ";
	cout << "\n\n";

	cout << "Elements of the 2st tree"<<endl;
	for (int i = 0; i < t2->getNodecount(); i++)
		cout << arr2[i]<<" ";


	arr = merge(arr1, arr2, t1->getNodecount(), t2->getNodecount());

	cout << "\n\n After merge elements are:\n";
	for (int i = 0; i < t2->getNodecount()+ t1->getNodecount(); i++)
		cout << arr[i] << " ";

	LinkedList* list1 = t1->inorderInserttoLinkedList();
	cout << "\n\n Elemets of 1st Tree in LinkedList\n";
	list1->display();

	LinkedList* list2 = t2->inorderInserttoLinkedList();
	cout << "\n\n Elemets of 1st Tree in LinkedList\n";
	list2->display();

	LinkedList* list3 = MergerLinkedList(list1, list2);

	cout << "\n\n Elemets after merge in LinkedList\n";
	list3->display();

	_getch();
}



