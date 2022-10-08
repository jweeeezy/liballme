/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:55:31 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 14:17:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str_first, const char *str_second, size_t bytes)
{
	size_t	index;

	index = 0;
	while (index < bytes && (str_first[index] != '\0'
			|| str_second[index] != '\0'))
	{
		if (str_first[index] != str_second[index])
			return (((unsigned char *) str_first)[index] - ((unsigned char *)
					str_second)[index]);
		index++;
	}
	return (0);
}
