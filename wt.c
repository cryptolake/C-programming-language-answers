#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c,st,d;
	st = OUT;
	d = 0;
	while ((c = getchar()) != EOF )
	{
		if ((c == ' ') || (c == '\n') || (c == '\t'))
		{
			st = OUT;
			++d;
		}

		else
		{
			st = IN;
			putchar(c);
			d = 0;
		}

		if ( d == 1 )
		{
			printf("\n");
		}


	}




}
