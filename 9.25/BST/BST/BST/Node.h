#pragma once
class Node
{
public:
	int num;
	Node *l, *r;
	Node(int num, Node *l = nullptr, Node *r=nullptr);
	~Node();
};

