#include <stdio.h>
#define MAX 1000
char line[MAX]; /* current input line */
char longest[MAX]; /* longest line saved here */
int max; /* MAXmum length seen so far */
int gtline(void);
void copy();

main()
{
	int len; /* current line length*/

	max = 0;
	/* if (gtline(line,MAX) == MAX - 1) */
	/* 	MAX = 2000; */
	while ((len = gtline()) > 0)
	{

		if (len > max) {
		max = len;
		copy();
		}
	}
	if (max > 0) /* there was a line */
		printf("%s,%i", longest,max);
	return 0;
}
/* getline: read a line into s, return length */
int gtline(void)
{
	int c, i;

	for (i=0; i < max-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(void)
{
	int i;

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
