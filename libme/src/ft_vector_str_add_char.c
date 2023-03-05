/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_add_char.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:08:07 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/16 15:14:46 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"
#include "libft.h"

t_vector_str	*ft_vector_str_add_char(t_vector_str *vector_to_expand,
					char c_to_add)
{
	t_vector_str	*vector_return;
	size_t			size_to_add;
	char			str_to_add[2];

	if (vector_to_expand == NULL)
		return (NULL);
	if (ft_isascii(c_to_add) == 0)
		return (vector_to_expand);
	size_to_add = 2;
	if (vector_to_expand->size_used + size_to_add
		<= vector_to_expand->size_allocated)
	{
		vector_to_expand->str[vector_to_expand->size_used - 1] = c_to_add;
		vector_to_expand->str[vector_to_expand->size_used] = '\0';
		vector_to_expand->size_used = vector_to_expand->size_used + 1;
		return (vector_to_expand);
	}
	str_to_add[0] = c_to_add;
	str_to_add[1] = '\0';
	vector_return = ft_vector_str_join(vector_to_expand, str_to_add, 0);
	return (vector_return);
}
