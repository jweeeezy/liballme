/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:13:24 by jwillert          #+#    #+#             */
/*   Updated: 2022/09/26 12:46:16 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifc(char c, int length)
{
	ft_putchar_fd(c, 1);
	length++;
	return (length);
}

int	ft_ifs(char *str, int length)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		length = length + 6;
	}
	else if (str != NULL)
	{
		ft_putstr_fd(str, 1);
		length = ft_strlen(str) + length;
	}
	return (length);
}

int	ft_ifp(void *ptr, int length)
{
	char	*str_n;

	str_n = NULL;
	str_n = ft_ptr_get_address(ptr);
	ft_putstr_fd(str_n, 1);
	length = length + ft_strlen(str_n);
	free(str_n);
	return (length);
}

int	ft_ifperc(int length)
{
	length = ft_ifc('%', length);
	return (length);
}
