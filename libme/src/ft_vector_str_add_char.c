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

	if (vector_to_expand == NULL)

	size_to_add = 2;
	if (vector_to_expand->size_used + size_to_add <= vector_to_expand->size_allocated)
	{
		ft_strlcat(vector_to_expand->str, )
	}










}