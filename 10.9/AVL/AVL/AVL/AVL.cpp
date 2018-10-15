#include "AVL.h"
#include <algorithm>


AVL::AVL()
{
	root = nullptr;
}


AVL::~AVL()
{
}

void maintain(Node *p) //更新高度信息
{
	if (!p)
		return;
	p->h = (p->l ? (p->r ? std::max(p->l->h, p->r->h) : p->l->h) :
		(p->r ? p->r->h : 0))
		+ 1;
	return;
}

void AVL::turn_left(Node *p)
{
	Node *q = p->r;
	p->r = q->l;
	q->l = p;
	maintain(p);
	maintain(q);
	return;
}

void AVL::turn_right(Node *p)
{
	Node *q = p->l;
	p->l = q->r;
	q->r = p;
	maintain(p);
	maintain(q);
	return;
}

void AVL::ll(Node *p)
{
	if (root == p)
		root = p->l;
	else if (p->is_l_son)
		p->f->l = p->l;
	else
		p->f->r = p->l;
	turn_right(p);
	return;
}

void AVL::lr(Node *p)
{
	if (root == p)
		root = p->l->r;
	else if (p->is_l_son)
		p->f->l = p->l->r;
	else
		p->f->r = p->l->r;
	turn_left(p->l);
	turn_right(p);
}

void AVL::rl(Node *p)
{
	if (root == p)
		root = p->r->l;
	else if (p->is_l_son)
		p->f->l = p->r->l;
	else
		p->f->r = p->r->l;
	turn_right(p->r);
	turn_left(p);
}

void AVL::rr(Node *p)
{
	if (root == p)
		root = p->r;
	else if (p->is_l_son)
		p->f->l = p->r;
	else
		p->f->r = p->r;
	turn_left(p);
	return;
}

void AVL::turn(Node *p)
{
	int lh = p->l ? p->l->h : 0;
	int rh = p->r ? p->r->h : 0;
	if (lh - rh > 1)//l
	{
		Node *pl = p->l;
		lh = pl->l ? pl->l->h : 0;
		rh = pl->r ? pl->r->h : 0;
		if (lh > rh)//ll
			ll(p);
		else//因为说第一个if已经判断出来失衡了,所以不是ll就是lr
			lr(p);
		return;
	}
	if (rh - lh > 1)//r
	{
		Node *pr = p->r;
		lh = pr->l ? pr->l->h : 0;
		rh = pr->r ? pr->r->h : 0;
		if (rh > lh)//rr
			rr(p);
		else //因为说第一个if已经判断出来失衡了,所以不是rr就是rl
			rl(p);
		return;
	}
	return;
}

void AVL::insert(Node *p, int x)
{
	if (x < p->v)
	{
		if (!p->l)
		{
			p->l = new Node(x, p);
			p->l->is_l_son = true;
		}
		else
			insert(p->l, x);
	}
	if (x > p->v)
	{
		if (!p->r)
		{
			p->r = new Node(x, p);
			p->r->is_l_son = false;
		}
		else
			insert(p->r, x);
	}
	turn(p);
	maintain(p);
	return;
}

void AVL::insert(int x)
{
	if (!root)
	{
		root = new Node(x);
		return;
	}
	insert(root, x);
	return;
}

int AVL::height()
{
	return root->h;
}