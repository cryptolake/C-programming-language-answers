#include <stdio.h>

main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
		putchar();
	printf("%ld\n", nc);

}
