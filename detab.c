#include <stdio.h>
#define MAXLINE 1000

main()
{
	int c,i,j;

	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF; ++i )
	{
		if (c == '\t')
		{
			for (j = i; j < 7+i; j++)
				putchar(' ');

		}
		else
			putchar(c);
	}
}
