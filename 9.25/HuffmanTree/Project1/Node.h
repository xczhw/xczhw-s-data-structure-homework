#pragma once
class Node
{
public:
	Node * l, *r;
	int value;
	Node(int value, Node *l = nullptr, Node *r = nullptr)
	{
		this->l = l;
		this->r = r;
		this->value = value;
	}
	bool operator < (const Node *b) const
	{
		return this->value < b->value;
	}
};