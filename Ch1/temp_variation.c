#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
	int fahr;

	printf("\nºF\tºC\n");
	printf("__________\n");
	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
