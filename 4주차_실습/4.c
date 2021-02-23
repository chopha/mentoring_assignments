#include <stdio.h>

void function(int a, int b, int c, int x)
{
	int fx = a * (x * x) + (b * x) + c;
	printf("f(%d) = %d", x, fx);
}
int main()
{
	int a, b, c, x;
	printf("Input a, b, and c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Input x: ");
	scanf("%d", &x);
	function(a,b,c,x);
}
