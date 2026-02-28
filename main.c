#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *str = "tout le monde";
	printf("Bonjour %s\n", str);
	ft_printf("Bonjour %s\n", str);
	printf("Bonjour %k\n", str);
	ft_printf("Bonjour %k\n", str);
	return 0;
}

