#include <stdio.h>
int main()
{
	double *p, j = 20;
	void* v;
	printf("%f", *((double*)(v = &j)));
	return 0;

}
