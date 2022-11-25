/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_index_init.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:28:03 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/25 11:36:32 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

size_t	*ft_array_index_init(size_t	array_size)
{
	size_t	index;
	size_t	*array_index;

	index = 0;
	array_index = (size_t *) malloc (sizeof (size_t) * array_size);
	while (index < array_size)
	{
		array_index[index] = 0;
		index++;
	}
	return (array_index);
}
