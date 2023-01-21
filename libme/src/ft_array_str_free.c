/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_str_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:58:00 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:19:54 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_array_str_free(char **array_to_free)
{
	size_t	index;

	index = 0;
	while (array_to_free[index] != NULL)
	{
		free(array_to_free[index]);
		index++;
	}
	free (array_to_free);
}
