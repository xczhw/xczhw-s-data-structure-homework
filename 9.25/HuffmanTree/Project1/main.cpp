#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include "HuffmanTree.h"
using namespace std;
const int MAXN = 100000 + 5;
int n, a[MAXN];
int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf_s("%d", &a[i]);
	HuffmanTree ht(a, n);
	printf("%d\n", ht.get_value());
	system("pause");
}