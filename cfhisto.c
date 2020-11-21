#include <stdio.h>

main()
{
	int c,i,d;
	int cha[127];
	for (i= 0; i < 127; ++i)
		cha[i] = 0;
	while ((c = getchar()) != EOF)
	{
		++cha[c];
	}
	for (i = 0; i <= 126; ++i )
	{
		if ( cha[i] >= 1 )
		{
			if (i == 32)
				printf("spaces");
			else if ( i == 10 )
				printf("lines");
			else
				putchar(i);
			printf(" ");
			for (d = 1; d <= cha[i]; ++d)
			{
				printf("=");
			}
			printf("]");
			printf(" %d",cha[i]);
			printf("\n");

		}
	}

}
