#include "LLNode.h"

int LLNode::getData()
{
    return this->data;
}

LLNode* LLNode::getLink()
{
    return this->link;
}

void LLNode::setData(int data)
{
    this->data = data;
}

void LLNode::setLink(LLNode* link)
{
    this->link = link;
}