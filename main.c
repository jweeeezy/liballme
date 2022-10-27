#include "liballme.h"
#include <stdio.h>

int main(int argc, char **argv)
{

	size_t		index;
	long int	nbr;

	index = 1;
	nbr = 0;
	if (argc < 1)
		exit (1);
	while(argv[index] != NULL)
	{
		nbr = ft_atoi_long(argv[index]);
		if (nbr == 9999999999)
			printf("Error\n");
		else if (nbr == 9999999991)
			printf("null");
		else
			printf("%ld\n", nbr);
		index++;
	}
	return (0);
}
