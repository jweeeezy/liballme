/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_str_find_size_allocated.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:26:47 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/19 17:27:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

size_t			ft_vector_str_find_size_allocated(t_vector_str *vector_to_search)
{
	return (vector_to_search->size_allocated);
}
