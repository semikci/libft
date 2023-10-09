#include <stdio.h>

int isprint(int c)
{
	return (c >= 32 && c < 127);
}

int main()
{
	printf("%d\n", isprint('A'));
	printf("%d\n", isprint(1));
	printf("%d\n", isprint(127));
}