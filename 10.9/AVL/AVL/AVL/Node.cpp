#include "Node.h"



Node::Node(int v, Node *f, Node *l, Node *r)
{
	this->v = v;
	this->f = f;
	this->l = l;
	this->r = r;
	this->h = 1;
	return;
}


Node::~Node()
{
}
