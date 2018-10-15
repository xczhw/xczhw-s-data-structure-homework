#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include "Node.h"
#include "AVL.h"
using namespace std;
int n;
AVL tree;
int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		tree.insert(i);
	printf("%d\n", tree.height());
	system("pause");
	return 0;
}