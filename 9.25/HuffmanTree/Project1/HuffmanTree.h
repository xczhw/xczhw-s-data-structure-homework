#pragma once
#include "Node.h"
#include <queue>
using namespace std;
class HuffmanTree
{
	Node *root;
public:
	HuffmanTree(int a[], int n)
	{
		priority_queue <Node*> q;
		for (int i = 1; i <= n; i++)
			q.push(new Node(a[i]));
		while (!q.empty())
		{
			Node *l = q.top();
			q.pop();
			if (q.empty())
			{
				root = l;
				break;
			}
			Node *r = q.top();
			q.pop();
			q.push(new Node(l->value + r->value, l, r));
		}
		return;
	}
	int dfs(Node *x, int deep)
	{
		if (x->l == x->r && x->l == nullptr)
			return x->value * deep;
		int ans = 0;
		if (x->l != nullptr)
			ans += dfs(x->l, deep + 1);
		if (x->r != nullptr)
			ans += dfs(x->r, deep + 1);
		return ans;
	}
public:
	int get_value()
	{
		return dfs(root, 0);
	}
};