#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
	int c;

	printf("To end, type: %i\n", EOF);
	while ((c = getchar()) != EOF)
		putchar(c);
}
