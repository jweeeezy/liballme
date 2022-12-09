/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_join.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:19:39 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/09 19:22:15 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_join(t_vector_str *vector_to_expand,
					char *str_to_add, size_t size_to_add)
{
	t_vector_str	*vector_return;
	char			*str_tmp;

	vector_return = vector_to_expand;
	if (vector_to_expand == NULL)
		return (NULL);
	if (size_to_add == 0)
		size_to_add = ft_strlen(str_to_add);
	if (vector_to_expand->size_used + size_to_add
		<= vector_to_expand->size_allocated)
	{
		ft_strlcat(vector_to_expand->str, str_to_add,
			vector_to_expand->size_used + size_to_add);
		vector_to_expand->size_used = vector_to_expand->size_used + size_to_add;
	}
	else if (vector_to_expand->size_allocated < size_to_add
		+ vector_to_expand->size_used)
	{
		str_tmp = ft_strjoin(vector_to_expand->str, str_to_add);
		vector_return = ft_vector_str_new(str_tmp);
		ft_vector_str_free(vector_to_expand);
		free(str_tmp);
	}
	return (vector_return);
}
