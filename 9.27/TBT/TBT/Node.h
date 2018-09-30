#pragma once
class Node
{
public:
	int v;
	Node *l, *r;
	bool l_tag, r_tag;//1->thread, 0->child
	Node(int v, Node *l = nullptr, Node *r = nullptr,
		bool l_tag = false, bool r_tag = false);
	~Node();
};

