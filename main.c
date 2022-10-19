
#include "liballme.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	*str;
	
	str = NULL;
	if (argc < 1)
		return (0);
	str = ft_input_strjoin(argv);
	printf("%s\n", str);	
	return (0);
}

