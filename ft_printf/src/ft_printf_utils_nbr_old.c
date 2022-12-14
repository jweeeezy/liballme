/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:17:29 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/14 17:30:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifdi(int n, int length)
{
	char	*str;

	str = NULL;
	str = ft_itoa(n);
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
	free(str);
	return (length);
}

int	ft_ifu(unsigned int nu, int length)
{
	char	*str;

	str = NULL;
	str = ft_itoa_unsigned(nu);
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
	free(str);
	return (length);
}

int	ft_ifxlower(unsigned int nu, int length)
{
	char	*str;
	int		caps;

	caps = 0;
	str = NULL;
	str = ft_itoa_hexadecimal(nu, caps);
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
	free(str);
	return (length);
}

int	ft_ifxupper(unsigned int nu, int length)
{
	char	*str;
	int		caps;

	caps = 1;
	str = NULL;
	str = ft_itoa_hexadecimal(nu, caps);
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
	free(str);
	return (length);
}
