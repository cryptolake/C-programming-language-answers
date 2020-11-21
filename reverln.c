#include <stdio.h>
#define MAX 1000
void reverse(char line[], char lend[], int leng);
int geetlin(char lin[], int lim);

main()
{
	int i,len;
	char s[MAX];
	char sr[MAX];
	while((len=(geetlin(s,MAX))) != 0)
	{
		reverse(sr,s,len);
		printf("%s",sr);
	}
}
void reverse(char to[], char from[], int leno)
{
	int i;
	for (i=leno; i >= 0; --i)
	{
		to[leno-i] = from[i];
	}
}
int geetlin(char st[], int lim)
{
	int i,c;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c != '\n'; ++i )
		st[i] = c;
	if (c=='\n')
	{
		st[i] = c;
	}
	return i;

}
