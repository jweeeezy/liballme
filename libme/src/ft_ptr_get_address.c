/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_get_address.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:03:26 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 14:51:14 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	*ft_ptr_get_address(void *ptr)
{
	char	*str_return;
	char	*str_ptr_address;

	str_ptr_address = NULL;
	str_return = NULL;
	if (ptr == NULL)
	{
		str_ptr_address = malloc (sizeof (char) * 2);
		if (str_ptr_address == NULL)
			return (NULL);
		str_ptr_address[0] = '0';
		str_ptr_address[1] = '\0';
	}
	else
	{
		str_ptr_address = ft_itoa_hexadecimal_long(
				(unsigned long) ptr, 0);
		if (str_ptr_address == NULL)
			return (NULL);
	}
	str_return = ft_strjoin("0x", str_ptr_address);
	free(str_ptr_address);
	return (str_return);
}
