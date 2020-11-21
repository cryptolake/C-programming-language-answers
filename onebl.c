#include <stdio.h>

main()
{
	int c,bl;
	bl = 0;
	while((c = getchar()) != EOF )
	{
		if (c == ' ')
			bl++;
		else if ((c != ' ') && ( bl > 0 ))
			bl = 0;
		if (bl > 1 )
			;
		else
			putchar(c);
	}
}
