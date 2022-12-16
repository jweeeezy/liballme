/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:31:59 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/16 15:18:23 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_vector_str	*ft_ifc(char c_to_add, t_vector_str *vector)
{
	vector = ft_vector_str_add_char(vector, c_to_add);
	return (vector);
}

t_vector_str	*ft_ifs(char *string_to_add, t_vector_str *vector)
{
	if (string_to_add == NULL)
		vector = ft_vector_str_join(vector, "(null)", 0);
	else
		vector = ft_vector_str_join(vector, string_to_add, 0);
	return (vector);
}

t_vector_str	*ft_ifp(void *pointer, t_vector_str *vector)
{
	char	*string_to_add;

	string_to_add = ft_ptr_get_address(pointer);
	if (string_to_add == NULL)
		vector = ft_vector_str_join(vector, "(null)", 0);
	else
	{
		vector = ft_vector_str_join(vector, string_to_add, 0);
		free(string_to_add);
	}
	return (vector);
}

t_vector_str	*ft_ifperc(t_vector_str *vector)
{
	vector = ft_ifc('%', vector);
	return (vector);
}
