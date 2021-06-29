#pragma once
#include "LLNode.h"
#include <iostream>

class LinkedList
{
	LLNode* head;
	int nodecount;

public:
	LinkedList();
	void insert(int data);
	void display();
	int getNodeCount();
	LLNode* getHead();
};