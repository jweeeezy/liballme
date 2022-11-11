/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:52:23 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 16:06:16 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	*ft_realloc(void *ptr_to_realloc, size_t size_old, size_t size_new)
{
	void	*ptr_temp;

	if (ptr_to_realloc == NULL)
		return ((void *)malloc(size_new));
	if (size_old == 0)
		return (ptr_to_realloc);
	if (size_new == 0)
	{
		free(ptr_to_realloc);
		return (NULL);
	}
	ptr_temp = (void *)malloc(size_new);
	if (ptr_temp == NULL)
		return (NULL);
	ft_memmove(ptr_temp, ptr_to_realloc, size_old);
	free(ptr_to_realloc);
	return (ptr_temp);
}

