/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_argc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:42:03 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/12 13:45:39 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

size_t	ft_input_argc(char **array_to_count)
{
	size_t	index;

	index = 0;
	while (array_to_count[index] != NULL)
		index++;
	return (index);
}
