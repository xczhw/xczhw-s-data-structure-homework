#include <cstdio>
#include "TBT.h"



TBT::TBT()
{
}


TBT::~TBT()
{
}


void TBT::create_tree(Node *&t)
{
	int data;
	scanf_s("%d", &data);
	if (data == -1)
	{
		t = nullptr;
		return;
	}

	t = new Node(data);
	create_tree((t->l));
	create_tree((t->r));
	return;
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

void TBT::get_thread(Node *&head, Node *root)
{
	head = new Node(-1);

	head->r = head;
}