/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:26:29 by jwillert          #+#    #+#             */
/*   Updated: 2022/06/12 16:19:43 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_specifier(va_list args, char c, int length)
{
	if (c == 'c')
		length = ft_ifc(va_arg(args, int), length);
	else if (c == 's')
		length = ft_ifs(va_arg(args, char *), length);
	else if (c == 'p')
		length = ft_ifp(va_arg(args, void *), length);
	else if (c == 'd' || c == 'i')
		length = ft_ifdi(va_arg(args, int), length);
	else if (c == 'u')
		length = ft_ifu(va_arg(args, unsigned int), length);
	else if (c == 'x')
		length = ft_ifxlower(va_arg(args, unsigned int), length);
	else if (c == 'X')
		length = ft_ifxupper(va_arg(args, unsigned int), length);
	else if (c == '%')
		length = ft_ifperc(length);
	return (length);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
			length = ft_check_specifier(args, input[++i], length);
		else if (input[i] != '\0')
			length = ft_ifc(input[i], length);
		i++;
	}
	va_end(args);
	return (length);
}
