#include <stdio.h>

/* displays a horizontally-facing histogram
   representing the length of the words. */
main ()
{
	int c;

	while((c = getchar()) != EOF)
		if( c == ' ' || c == '\n' || c == '\t')
			printf("\n");
		else
			printf("#");
}
