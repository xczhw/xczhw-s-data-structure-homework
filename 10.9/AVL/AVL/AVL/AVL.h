#pragma once
#include "Node.h"
class AVL
{
	Node *root;
	void turn_left(Node *p);
	void turn_right(Node *p);
	void ll(Node *p);
	void lr(Node *p);
	void rl(Node *p);
	void rr(Node *p);
	void turn(Node *p);
	void insert(Node *p, int x);
public:
	AVL();
	~AVL();
	void insert(int x);
	int height();
};

