#include <stdio.h>

main()
{
	int bl, nl, c, tb;
	nl = 0;
	bl = 0;
	tb = 0;
	while ( (c = getchar()) != EOF )
	{
		if (c == '\n')
			nl++;
		if (c == '\t')
			tb++;
		if (c == ' ')
			bl++;
	}
	printf("Blanks:%d New Lines:%d Tabs:%d",bl,nl,tb);
	/* done and done */


}
