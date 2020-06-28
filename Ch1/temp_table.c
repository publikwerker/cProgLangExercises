#include <stdio.h>

int fToC(int temp);
int cToF(int temp);

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* lower limit of temp table */
	upper = 300;  /* upper limit of temp table */
	step = 20;    /* step size */

	printf("ºF\tºC\n");
	printf("__________\n");
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = fToC(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}

	printf("\n\n\nºC\tºF\n");
	printf("__________\n");
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = cToF(celsius);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}

/* fToC: converts Fahrenheit to Celsius */
int fToC(int temp)
{
	return (5.0/9.0) * (temp - 32.0);
}

/* cToF: converts Celsius to Fahrenheit */
int cToF(int temp)
{
	return (9.0/5.0) * temp + 32;
}
