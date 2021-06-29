#pragma once
class LLNode
{
	int data;
	LLNode* link;

public:
	int getData();
	LLNode* getLink();
	void setData(int data);
	void setLink(LLNode* link);
};

