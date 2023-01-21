/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reallocf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:52:23 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:34:02 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_reallocf(void *ptr_to_realloc, size_t size_old, size_t size_new)
{
	void	*ptr_return;

	if (ptr_to_realloc == NULL)
	{
		ptr_return = ((void *) malloc (size_new));
		free (ptr_to_realloc);
		return (ptr_return);
	}
	if (size_new == 0 && ptr_to_realloc != NULL)
	{
		ptr_return = NULL;
		free(ptr_to_realloc);
		return (ptr_return);
	}
	ptr_return = (void *)malloc(size_new);
	if (ptr_return != NULL)
		ft_memmove(ptr_return, ptr_to_realloc, size_old);
	free(ptr_to_realloc);
	return (ptr_return);
}
