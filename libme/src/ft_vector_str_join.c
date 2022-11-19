/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_join.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:19:39 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/19 17:35:50 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_join(t_vector_str *vector_to_expand,
						char *str_to_add, size_t size_to_add)
{
	t_vector_str	*vector_return;

	vector_return = NULL;
	if (vector_to_expand->size_used + size_to_add
			<= vector_to_expand->size_allocated)
		ft_strlcat(vector_to_expand->str, str_to_add,
			vector_to_expand->size_used + size_to_add);
	else
		vector_return = ft_reallocf(vector_to_expand,
			vector_to_expand->size_allocated, vector_to_expand->size_used
			+ size_to_add);
	return (vector_return);
}
