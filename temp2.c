#include <stdio.h>

main()
{
	float cels, fahr;
	float step, max, min;

	min=0;
	max=100.0;
	step=5.0;
	cels = min;
	while (cels <= max)
	{
		fahr = cels/(5.0/9.0)+32;
		printf("%3.0f %6.0f\n", cels, fahr);
		cels = cels + step;
	}





}
