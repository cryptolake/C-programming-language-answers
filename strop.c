#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 1000
int htoi(char s[max]);
void squeeze(char s1[],char s2[]);
int any(char s1[],char s2[]);
int main()
{
	char s[max],s1[max];
	scanf("%s",s);
	scanf("%s",s1);
	printf("%d",any(s,s1));

}
int htoi(char s[])
{
	int i=0,n=0;
	if (s[i] == 0)
		++i;
	if (s[i] == 'x' || s[i] =='X')
		++i;
	for (;i < strlen(s); ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'f')
			n = n * 16 + s[i] - 'a' + 10;
		else if (s[i] >='A' && s[i] <='F')
			n = n * 16 + s[i] - 'A' + 10;
		else if isdigit(s[i])
			n = n * 16 + s[i] - '0';
	}
	return n;


}
void squeeze(char s1[], char s2[])
{
	int i,j,k,d;
	for (i=k=0; i < strlen(s1); ++i)
	{
		d=0;
		for (j=0; j < strlen(s2); ++j)
		{
			if (s1[i] == s2[j])
				d = 1;

		}
		if (!d)
			s1[k++] = s1[i];

	}

		s1[k] = '\0';

}
int any(char s1[], char s2[])
{

	int i,j,k,d=0;

	for (i=k=0; i < strlen(s1); ++i)
	{
		d = -1;
		for (j=0; j < strlen(s2); ++j)
		{
			if (s1[i] == s2[j])
			{
				d = i;
				k = 1;
				break;
			}

		}
		if (k)
			break;




	}

		return d;


}
