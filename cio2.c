#include <stdio.h>
/* count the number of characters in the input */
main()
{
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n",nc-1);
}
