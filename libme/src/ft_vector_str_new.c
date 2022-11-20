/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:21:41 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/20 12:41:24 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_vector_str	*ft_vector_str_new(size_t size_of_str)
{
	t_vector_str	*vector_return;

	vector_return = (t_vector_str *) malloc (sizeof(t_vector_str));
	vector_return->str = (char *) malloc (sizeof (char) * size_of_str * 2);
	vector_return->size_used = size_of_str;
	vector_return->size_allocated = size_of_str * 2;
	return (vector_return);
}
