#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c,nl,w,d,nth,i;
	d = OUT;
	nl = w = nth = 0;
	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '\t') || (c == '\n') || (c == '.') || (c == '?')|| (c == '!'))
		{
			d = OUT;
			++nth;
			/* w = 0; */
		}
		else
		{
			d = IN;
			putchar(c);
			nth = 0;
			++w;
		}
		if ( nth == 1 )
		{
			printf(" ");
			for ( i=0; i <= w; ++i)
			{
				printf("=");

			}
			printf("] %d",w);
			printf("\n");
			w = 0;
		}




	}
}
