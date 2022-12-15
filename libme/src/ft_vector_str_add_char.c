/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_add_char.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:08:07 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/14 18:12:02 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_add_char(t_vector_str *vector_to_expand, char c_to_add)
{
	t_vector_str	*vector_return;
	size_t			size_to_add;
	char			*str_temp;
	char			*str_to_add;

	if (vector_to_expand == NULL)

	size_to_add = 2;
	if (vector_to_expand->size_used + size_to_add <= vector_to_expand->size_allocated)
	{
		vector_to_expand ->str[vector_return->size_used + 1] = c_to_add;
		vector_to_expand ->str[vector_return->size_used + 2] = '\0';
		vector_to_expand->size_used = vector_to_expand->size_used + 2;
	}
	else
	{
		str_temp = malloc (sizeof (char) * 2);
		if (str_temp == NULL)
			return (str_temp);
		str_temp[0] = c_to_add;
		str_temp[1] = '\0';
		str_to_add = ft_strjoin(vector_to_expand->str, str_temp);
		vector_return = ft_vector_str_new(str_to_add);
		ft_vector_str_free(vector_to_expand);
		free(str_temp);
	}
	return (vector_return);
}

// needs testing!