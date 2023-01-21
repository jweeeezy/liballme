/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check_needle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:53:51 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:35:02 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_str_check_needle(const char *haystack, const char *needle,
				size_t length)
{
	size_t	index;
	size_t	counter_needle;

	index = 0;
	counter_needle = 0;
	if (haystack == NULL || needle == NULL)
		return (0);
	if (ft_strlen(needle) <= 0)
		return (1);
	while (index < length && haystack[index] != '\0')
	{
		counter_needle = 0;
		if (haystack[index] == needle[0])
		{
			while (haystack[index + counter_needle] == needle[counter_needle]
				&& index + counter_needle < length)
			{
				if (needle [counter_needle + 1] == '\0')
					return (1);
				counter_needle++;
			}
		}
		index++;
	}
	return (0);
}
