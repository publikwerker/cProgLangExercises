#include <stdio.h>

/* copy input ot output; 1st version */
main()
{
	int c;

	printf("To end, type: %d", EOF);
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
