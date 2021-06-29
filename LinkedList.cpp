#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
	this->head = NULL;
}

void LinkedList::insert(int data)
{
	if (this->head == NULL)
	{
		this->head = new LLNode();
		this->head->setData(data);
		this->head->setLink(NULL);
	}
	else
	{
		LLNode* temp = this->head;
		while (temp->getLink() != NULL)
			temp = temp->getLink();
		temp->setLink(new LLNode());
		temp->getLink()->setData(data);
		temp->getLink()->setLink(NULL);
	}
	this->nodecount++;
}

void LinkedList::display()
{
	LLNode* temp = this->head;
	while (temp != NULL)
	{
		cout << temp->getData()<<" ";
		temp = temp->getLink();
	}
}

int LinkedList::getNodeCount()
{
	return this->nodecount;
}

LLNode* LinkedList::getHead()
{
	return this->head;
}
