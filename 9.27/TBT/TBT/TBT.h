#pragma once
#include "Node.h"
class TBT
{
	Node *root;
public:
	TBT();
	~TBT();
	void thread(Node *p, Node *f);
	void traversal();
};

