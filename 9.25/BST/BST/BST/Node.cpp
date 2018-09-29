#include "Node.h"



Node::Node(int num, Node *l, Node *r)
{
	this->num = num;
	this->l = l;
	this->r = r;
}


Node::~Node()
{
	delete this;
}
