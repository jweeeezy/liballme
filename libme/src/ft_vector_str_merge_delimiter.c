/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_merge_delimiter.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:08:57 by jwillert          #+#    #+#             */
/*   Updated: 2023/02/28 21:12:10 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_merge_delimiter(t_vector_str *vector_to_merge_to,
					char *str_delimiter, t_vector_str *vector_obsolete)
{
	vector_to_merge_to = ft_vector_str_join(vector_to_merge_to,
		str_delimiter, 0);
	vector_to_merge_to = ft_vector_str_join(vector_to_merge_to,
		vector_obsolete->str, 0);
	ft_vector_str_free(vector_obsolete);
	return (vector_to_merge_to);
}
