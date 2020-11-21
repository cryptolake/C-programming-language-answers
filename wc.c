#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c,nl,w,d;
	d = OUT;
	nl = w = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		if ((c == ' ') || (c == '\t') || (c == '\n') )
			d = OUT;
		else if ( d == OUT )
		{
			d = IN;
			++w;
		}




	}
	printf("Lines %d  Words %d\n",nl,w);
}
