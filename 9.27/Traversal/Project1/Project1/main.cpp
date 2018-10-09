#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 100000 + 5;
int pre_order[MAXN], in_order[MAXN];
/*
8
7 4 1 6 5 13 8 26
1 4 5 6 7 8 13 26
*/
void solve(int pre, int in, int l)
{
	//printf("pre: %d, in: %d, l:%d\n", pre, in, l);
	if (l == 0)
		return;
	int root = pre_order[pre];
	int rooti = 0;
	while (rooti < l)
	{
		if (in_order[in + rooti] == root)
			break;
		rooti ++;
	}
	solve(pre + 1, in, rooti);
	solve(pre + rooti + 1, in + rooti + 1, l - rooti - 1);
	printf("%d ", root);
	return;
}
int n;
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &pre_order[i]);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &in_order[i]);
	solve(0, 0, n);
	system("pause");
	return 0;
}