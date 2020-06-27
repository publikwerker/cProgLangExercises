#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* prints input one word per line */
main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if(c == '\n' || c == '\t' || c == ' ')
		{
			if (state == IN)
			{
				printf("\n");
				state = OUT;
			}
		}
		else
		{
			printf("%c", c);
			state = IN;
		}
	}
}
