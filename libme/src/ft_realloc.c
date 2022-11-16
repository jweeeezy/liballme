/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:52:23 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/16 13:24:45 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	*ft_reallocf(void *ptr_to_realloc, size_t size_old, size_t size_new)
{
	void	*ptr_return;


	// if not enough room to enlarge the room pointed to by ptr...
		// new allocation with old data and freeing the old allocation






	// reallocf will free the passed pointer if the requested memory cannot be allocated



// if ptr == NULL its equal to malloc for size bytes
	if (ptr_to_realloc == NULL)
	{
		ptr_return = ((void *) malloc (size_new));
		free (ptr_to_realloc);
		return (ptr_return);
	}

// if size is zero and ptr != NULL a new minimum sized object is allocated and the original object is freed
	if (size_new == 0 && ptr != NULL)
	{
		ptr_return = ((void *) malloc (1));
		free(ptr_to_realloc);
		return (ptr_return);
	}


	ptr_temp = (void *)malloc(size_new);
	if (ptr_temp == NULL)
		return (NULL);
	ft_memmove(ptr_temp, ptr_to_realloc, size_old);
	free(ptr_to_realloc);
	return (ptr_temp);
}
