/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:54:22 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 13:12:15 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str_to_search, int c_to_find)
{
	int		index;
	int		flag_null;

	index = 0;
	flag_null = 0;
	if ((char)c_to_find == '\0')
		flag_null = 1;
	while (str_to_search[index] != '\0')
	{
		if (str_to_search[index] == (char)c_to_find)
			return ((char *) &str_to_search[index]);
		index++;
	}
	if (flag_null == 1)
		return ((char *) &str_to_search[index]);
	return (NULL);
}
