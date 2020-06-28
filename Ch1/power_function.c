#include <stdio.h>

int power(int m, int n);

/* test power function */
main()
{
	int i;
	
	printf("n\t2^n\t-3^n\n");
	printf("__________________\n");
	for (i = 0; i < 10; ++i)
		printf("%d %6d %8d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* power: raise base to the n-th power; n >=0 */
int power(int base, int n)
{
	int i, p;

	p = 1;
	for ( i = 1; i <= n; ++i)
		p *= base;
	return p;
}
