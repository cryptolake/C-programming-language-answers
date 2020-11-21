#include <stdio.h>
#define MAX 1000

char line[MAX];
/*declare line global variable*/
int gtline(void);

/*declare the gtline function*/
main()
{

	int d;
	while ((d=gtline()) > 0)
	{
		if((line[0]!='/' && line[1]!='*') && (line[d-1]!='*' && line[d]!='/'))
		{
			printf("%s",line);
		}
	}

}

int gtline()
{
	int i,c;
	for (i=0; i < MAX-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
