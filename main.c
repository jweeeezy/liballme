#include "liballme.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	*str;

	str = NULL;
	if (argc < 1)
		return (0);
	//printf("%ld\n", ft_input_len(argv));
	str = ft_input_strjoin(argv + 1);
	//printf("%s\n", str);
	ft_input_print(ft_split(str, ' '));
	return (0);
}
