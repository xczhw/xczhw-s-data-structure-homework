//英文不咋地的代码 嘿嘿嘿 >_<
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int gcd (int a, int b)
{
	return b ? a : gcd(b, a % b);
}
int aim;
int ma,mb,c;
int a,b;
void out_water ()
{
	printf("now %dL cup has %dL water and %dL cup has %dL water\n",
		   ma, a, mb, b);
}
int main ()
{
	scanf("%d %d %d", &ma, &mb, &c);
	if(gcd(ma, mb) % c != 0)
	{
		puts("I can't do it");
		return 0;
	}
	if (ma > mb)
		swap(ma, mb);
	while (true)
	{
		if (a == ma)
		{
			printf("clear %dL cup ", ma);
			a = 0;
			out_water();
			continue;
		}
		if (!b)
		{
			printf("full up %dL cup ", mb);
			b = mb;
			out_water();
			continue;
		}
		if(a == c)
			break;
		printf("move %dL cup to %dL cup ", mb, ma);
		int delta = min(ma - a, b);
		b -= delta;
		a += delta;
		out_water();
	}
	return 0;
}
