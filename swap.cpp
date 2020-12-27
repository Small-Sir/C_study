#include "swap.h"

void swap(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
}