/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:59:15 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:08:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *ptr_dst, const void *ptr_src, size_t bytes)
{
	size_t	index;

	index = 0;
	if (ptr_dst == ptr_src)
		return (ptr_dst);
	while (index < bytes)
	{
		((char *) ptr_dst)[index] = ((char *) ptr_src)[index];
		index++;
	}
	return (ptr_dst);
}
