/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:24 by jwillert          #+#    #+#             */
/*   Updated: 2022/10/24 15:48:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

size_t	ft_input_len(char **array_to_count)
{
	size_t	index;

	index = 0;
	if (array_to_count == NULL)
		return (0);
	while (array_to_count[index] != NULL)
		index++;
	return (index);
}
