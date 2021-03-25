#include <stdio.h>
struct DATA{
	int x,y;
}a[3];
struct DATA b={100,200};

int main()
{
	struct DATA c;
	c=b;

	return 0;
}
