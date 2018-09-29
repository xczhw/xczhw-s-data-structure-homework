#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include "BST.h"
using namespace std;

BST tree;
int n;
int main()
{
	scanf_s("%d", &n);
	while (n--)
	{
		int q, x;
		scanf_s("%d %d", &q, &x);
		switch (q)
		{
		case 1:
			tree.insert(x);
			break;
		case 2:
			printf("%d\n", tree.find(x) != nullptr);
			break;
		}
	}
	return 0;
}