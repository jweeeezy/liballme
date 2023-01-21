/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_count_arguments.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:42:03 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:24:58 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_input_count_arguments(char **array_to_count)
{
	size_t	index;

	index = 0;
	while (array_to_count[index] != NULL)
		index++;
	return (index);
}
