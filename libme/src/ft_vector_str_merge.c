/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_merge.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:33:31 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/01 12:47:53 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_merge(t_vector_str *vector_to_merge_to,
					t_vector_str *vector_obsolete)
{
	if (vector_to_merge_to == NULL)
		return (NULL);
	vector_to_merge_to = ft_vector_str_join(vector_to_merge_to,
			vector_obsolete->str, 0);
	ft_vector_str_free(vector_obsolete);
	return (vector_to_merge_to);
}
