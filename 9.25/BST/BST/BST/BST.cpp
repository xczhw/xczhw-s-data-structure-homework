#include "BST.h"



BST::BST()
{
	root = nullptr; 
}


BST::~BST()
{
}

void BST::insert(int num)
{
	Node *x = root;
	if (x == nullptr)
	{
		root = new Node(num);
		return;
	}
	while (true)
	{
		if (x->num < num)
			if (x->l == nullptr)
			{
				x->l = new Node(num);
				break;
			}
			else
				x = x->l;
		if (x->num > num)
			if (x->r == nullptr)
			{
				x->r = new Node(num);
				break;
			}
			else
				x = x->r;
	}
	return;
}

Node *BST::find(int num)
{
	Node *x = root;
	while (x != nullptr)
	{
		if (x->num == num)
			return x;
		if (x->num < num)
			x = x->l;
		else if (x->num > num)
			x = x->r;
	}
	return nullptr;
}