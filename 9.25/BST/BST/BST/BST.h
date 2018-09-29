#pragma once
#include "Node.h"
class BST
{
	Node *root;
public:
	BST();
	~BST();

	void insert(int num);
	Node *find(int num);
};

