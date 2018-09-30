#pragma once
#include "Node.h"
class TBT
{
	Node *root;
public:
	TBT();
	~TBT();
	void create_tree(Node *&t);
	void thread(Node *p, Node *f);
	void get_thread(Node *&head, Node *root);
};

