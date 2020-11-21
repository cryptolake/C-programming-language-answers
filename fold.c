#include <stdio.h>
#define max 50

main()
{
	int c,i;
	i = 0;
	while ((c=getchar()) != EOF)
	{
		putchar(c);
		if (c == '\n')
			i = 0;
		++i;
		if (i > max)
		{
			putchar('\n');
			i = 0;

		}


	}
}
