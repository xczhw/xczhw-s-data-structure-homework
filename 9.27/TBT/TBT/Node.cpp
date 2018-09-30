#include "Node.h"



Node::Node(int v, Node *l = nullptr, Node *r = nullptr,
	bool l_tag = false, bool r_tag = false)
{
	this->v = v;
	this->l = l;
	this->r = r;
	this->l_tag = l_tag;
	this->r_tag = r_tag;
	return;
}


Node::~Node()
{
}
