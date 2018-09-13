#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;
const int MAXN = 100000 + 5;
struct Node
{
	int num;
	Node *next;
	Node(int num, Node *next = nullptr)
	{
		this -> num = num;
		this -> next = next;
		return;
	}
};
struct List
{
	Node *head = nullptr;
	void insert(int num)
	{
		head = new Node(num, head);
		return;
	}
	bool is_cycle()
	{
		Node *a,*b;
		a = head;
		b = head -> next;
		while(a != b)
		{
			a = a -> next;
			b = b -> next -> next;
			if(a == nullptr || b == nullptr)
				return false;
		}
		return true;
	}
}l;
int read()
{
	char c = getchar();
	int x = 0;
	bool nega = false;
	while(!isdigit(c))
	{
		if(c == '-')
			nega = true;
		c = getchar();
	}
	while(isdigit(c))
	{
		x = (x << 1) + (x << 3) + (c - '0');
		c = getchar();
	}
	return x;
}
int n;
int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n;i ++)
		l.insert(read());
	l.head -> next -> next -> next -> next = l.head -> next -> next;
	if(l.is_cycle())
		puts("cycled!");
	else
		puts("A good list!");
	return 0;
}
