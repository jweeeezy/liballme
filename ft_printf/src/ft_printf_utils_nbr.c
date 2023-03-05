/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:04:19 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 17:46:13 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"
#include "libft.h"

t_vector_str	*ft_ifdi(int number, t_vector_str *vector)
{
	char	*string_to_add;

	string_to_add = ft_itoa(number);
	if (string_to_add == NULL)
		vector = ft_vector_str_join(vector, "(null)", 0);
	else
	{
		vector = ft_vector_str_join(vector, string_to_add, 0);
		free(string_to_add);
	}
	return (vector);
}

t_vector_str	*ft_ifu(unsigned int number, t_vector_str *vector)
{
	char	*string_to_add;

	string_to_add = ft_itoa_unsigned(number);
	if (string_to_add == NULL)
		vector = ft_vector_str_join(vector, "(null)", 0);
	else
	{
		vector = ft_vector_str_join(vector, string_to_add, 0);
		free(string_to_add);
	}
	return (vector);
}

t_vector_str	*ft_ifxlower(unsigned int number, t_vector_str *vector)
{
	char	*string_to_add;

	string_to_add = ft_itoa_hexadecimal(number, 0);
	if (string_to_add == NULL)
		vector = ft_vector_str_join(vector, "(null)", 0);
	else
	{
		vector = ft_vector_str_join(vector, string_to_add, 0);
		free(string_to_add);
	}
	return (vector);
}

t_vector_str	*ft_ifxupper(unsigned int number, t_vector_str *vector)
{
	char	*string_to_add;

	string_to_add = ft_itoa_hexadecimal(number, 1);
	if (string_to_add == NULL)
		vector = ft_vector_str_join(vector, "(null)", 0);
	else
	{
		vector = ft_vector_str_join(vector, string_to_add, 0);
		free(string_to_add);
	}
	return (vector);
}
