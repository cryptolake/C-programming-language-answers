#include <stdio.h>
/* count digits and other shit */
main()
{
	int c, i, nsp,noth;
	int ndigi[10];
	nsp = noth = 0;
	for (i = 0; i < 10; ++i )
		ndigi[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			++ndigi[c-'0'];
		else if ((c == ' ') || (c == '\n') || (c =='\t'))
			++nsp;
		else
			++noth;
	}
	printf("         ");
	for ( i= 0; i < 10; ++i )
	{
		printf(" %d ",i);
	}
	printf("\n");
	printf("digits = ");
	for ( i= 0; i < 10; ++i )
	{

		printf(" %d ",ndigi[i]);
	}
	printf("\n");
	printf(" whitespace = %d, other = %d",nsp,noth);



}
