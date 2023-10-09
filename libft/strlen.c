#include <stdio.h>

int strlen(const char *str)
{
	int	a;

	a = 0;
	while(str[a])
		a++;
	return (a);
}

int main()
{
	char a[] = "semih";
	printf("%d", strlen(a));
}