#pragma once
class Node
{
public:
	bool is_l_son;
	Node *f;
	Node *l, *r;
	int v, h;
	Node(int v, Node *f = nullptr, Node *l = nullptr, Node *r = nullptr);
	~Node();
};

