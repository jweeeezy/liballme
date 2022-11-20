/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:21:41 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/20 15:23:18 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_new(const char *str_to_add)
{
	t_vector_str	*vector_return;
	size_t			size_of_str;

	if (str_to_add == NULL)
		return (NULL);
	size_of_str = ft_strlen(str_to_add) + 1;
	vector_return = (t_vector_str *) malloc (sizeof(t_vector_str));
	vector_return->str = (char *) malloc ((sizeof (char) * size_of_str * 2));
	ft_strlcpy(vector_return->str, str_to_add, size_of_str);
	vector_return->size_used = size_of_str;
	vector_return->size_allocated = size_of_str * 2;
	return (vector_return);
}
