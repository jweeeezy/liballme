/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:41:12 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:13:05 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str_to_count)
{
	size_t	index;

	index = 0;
	if (str_to_count == NULL)
		return (0);
	while (str_to_count[index])
		index++;
	return (index);
}
