/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:14:01 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 15:02:03 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *ptr_dst, const void *ptr_src, size_t length)
{
	if (ptr_dst == ptr_src)
		return (ptr_dst);
	if (ptr_dst > ptr_src)
	{
		while (length > 0)
		{
			((char *)ptr_dst)[length - 1] = ((char *)ptr_src)[length - 1];
			length--;
		}
		return (ptr_dst);
	}
	return (ft_memcpy(ptr_dst, ptr_src, length));
}
