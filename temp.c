#include <stdio.h>

main()
{
	float fahr, cels;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahrenheit celsius\n");
	while ( fahr <= upper ) {
		cels = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f \t %6.1f\n", fahr, cels);
		fahr = fahr + step;

	}






}
