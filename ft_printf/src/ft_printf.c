/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:52:47 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:44:12 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf_utils_nbr.h"
#include "ft_printf_utils_str.h"
#include "libme.h"
#include <unistd.h>

static t_vector_str	*ft_check_specifier(va_list args, char c,
	t_vector_str *vector)
{
	if (c == 'c')
		vector = ft_ifc(va_arg(args, int), vector);
	else if (c == 's')
		vector = ft_ifs(va_arg(args, char *), vector);
	else if (c == 'p')
		vector = ft_ifp(va_arg(args, void *), vector);
	else if (c == 'd' || c == 'i')
		vector = ft_ifdi(va_arg(args, int), vector);
	else if (c == 'u')
		vector = ft_ifu(va_arg(args, unsigned int), vector);
	else if (c == 'x')
		vector = ft_ifxlower(va_arg(args, unsigned int), vector);
	else if (c == 'X')
		vector = ft_ifxupper(va_arg(args, unsigned int), vector);
	else if (c == '%')
		vector = ft_ifperc(vector);
	return (vector);
}

static t_vector_str	*main_loop(va_list args, const char *input)
{
	int				index;
	t_vector_str	*output;

	index = 0;
	output = ft_vector_str_new("");
	if (output == NULL)
		return (NULL);
	while (input[index] != '\0')
	{
		if (input[index] == '%')
			output = ft_check_specifier(args, input[++index], output);
		else if (input[index] != '\0')
			output = ft_ifc(input[index], output);
		index++;
	}
	return (output);
}

int	ft_printf(const char *input, ...)
{
	int				length;
	va_list			args;
	t_vector_str	*output;

	va_start(args, input);
	output = main_loop(args, input);
	va_end(args);
	if (output == NULL)
		return (1);
	length = ft_strlen(output->str);
	if (write(1, output->str, length) == -1)
	{
		ft_vector_str_free(output);
		return (-1);
	}
	ft_vector_str_free(output);
	return (length);
}
