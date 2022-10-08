#include "libme.h"

char	ft_str_find_char(char const *str_to_search, char const char_to_find)
{
        size_t  index;

        index = 0;
        if (str_to_search == NULL)
                return (0);
        while (str_to_search[index] != '\0')
        {
                if (str_to_search[index] == char_to_find)
                        return (1);
                index++;
        }
        return (0);
}

