#include <stdio.h>

main()
{
	int i,lim,c;
	lim = 100;
	i = 0;

	for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF ; ++i)
		putchar(c);
	while (i < lim-1)
	{
		c=getchar();
		if (c == EOF)
			break;
		else if (c == '\n')
			break;

		putchar(c);
	}


}
