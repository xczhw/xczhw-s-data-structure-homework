#include <cstdio>
#include "TBT.h"



TBT::TBT()
{
}


TBT::~TBT()
{
}


void TBT::thread(Node *p, Node *f)
{
	if (!p)
		return;
	thread(p->l, p);

	if (!p->l)
	{
		p->l_tag = true;
		p->l = f;
	}
	if (!f->r)
	{
		f->r_tag = true;
		f->r = p;
	}

	thread(p->r, p);
}


void TBT::traversal()
{
	Node *p = this->root;
	while (true)
	{
		while (p->l)
			p = p->l;
		printf("%d ", p->v);
		while (p->r_tag && p->r)
		{
			p = p->r;
			printf("%d ", p->v);
		}
	}
	return;
}



