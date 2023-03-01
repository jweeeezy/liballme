/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_join_delimiter.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:02:23 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/01 12:49:23 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_join_delimiter(t_vector_str *vector_to_expand,
					char *str_delimiter, char *str_to_add)
{
	if (vector_to_expand == NULL)
		return (ft_vector_str_new(str_to_add));
	vector_to_expand = ft_vector_str_join(vector_to_expand, str_delimiter, 0);
	vector_to_expand = ft_vector_str_join(vector_to_expand, str_to_add, 0);
	return (vector_to_expand);
}
