#include <stdio.h>

void Swap(int* const lhs, int* const rhs)
{
	int temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

int main(void)
{
	int a = 10, b = 20;
	
	printf("Swap 전 : %d, %d\n", a, b);

	Swap(&a, &b);

	printf("Swap 후 : %d, %d\n", a, b);

	return 0;
}