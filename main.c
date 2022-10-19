#include "./include/liballme.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	printf("%ld", ft_array_len(argv));
	return (0);
}

