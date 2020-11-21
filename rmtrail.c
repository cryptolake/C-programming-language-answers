#include <stdio.h>
#define MAXLINE 1000

int rmline(char line[], int maxline);

main()
{
	char line[MAXLINE];
	while ( rmline(line,MAXLINE) > 0 )
		printf("%s\n", line);
}
int rmline(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	{
		if (c != '\t')
			s[i] = c;
	}
	if ((c = '\n') && (s[i-1] == ' '))
	{
		s[i-1] = '\n';
	}
	if (c == EOF)
		return EOF;
	else
		return i;
}
