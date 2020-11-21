#include<stdio.h>

unsigned setbits(unsigned x,int p,int n,unsigned y);

int main(void)
{
	printf("%u",setbits((unsigned)12,3,4,(unsigned)57));
}


unsigned setbits(unsigned x,int p,int n,unsigned y)
{
	return(x << (p+1-n) & ~(~0 << n));
}
