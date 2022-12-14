/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:12:48 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 14:54:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str_to_copy)
{
	size_t	index;
	char	*str_duplicate;

	index = 0;
	if (str_to_copy == NULL)
		return (NULL);
	str_duplicate = (char *)malloc
		(ft_strlen(str_to_copy) * sizeof (char) + 1);
	if (str_duplicate == NULL)
		return (NULL);
	while (str_to_copy[index] != '\0')
	{
		str_duplicate[index] = str_to_copy[index];
		index++;
	}
	str_duplicate[index] = '\0';
	return (str_duplicate);
}
