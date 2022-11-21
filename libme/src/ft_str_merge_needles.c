/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_merge_needles.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:07:02 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/21 17:28:23 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	*ft_str_merge_needles(char *str_haystack, char *str_needle_a, char *str_needle_b, char *str_needle_merge)
{
	char	*str_return;
	size_t	index_haystack;
	size_t	index_return;

	// SAFEGURADING
	if (str_haystack == NULL || str_needle_a == NULL || str_needle_b == NULL || str_needle_merge == NULL)
		return (NULL);


	// find how many occasions there are

	// probably something like this
	(char *) malloc ((sizeof (char) * (ft_strlen (str_haystack) - (occasions * ft_strlen(str_needle_a) + ft_strlen(str_needle_b) + occasions * ft_strlen(str_needle_merge)))


	// while loop where str_return copies values of str_haystack until str_haystack[index] == '\0'
		// until occasion is found
			//	then copy str_needle_merge instead and ++ until end of str_needle a + b
	while (str_haystack[index_haystack] != '\0')
	{






	}

	str_return[index_return] = '\0';
	free(str_haystack);

	return (NULL);
}