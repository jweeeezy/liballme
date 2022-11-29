/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort_to_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:40:29 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/29 10:01:22 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

int	*ft_lst_sort_to_array(t_lst **lst_to_sort)
{
	int		int_smallest;
	size_t 	count_nodes;
	int		*array;
	size_t	index;

	if ((*lst_to_sort) == NULL)
		return (NULL);
	count_nodes = ft_lst_count_nodes((*lst_to_sort));
	array = (int *) malloc (sizeof (int) * count_nodes);
	index = 0;
	while (count_nodes != 0)
	{
		int_smallest = ft_lst_find_int_smallest((*lst_to_sort));
		array[index] = int_smallest;
		ft_lst_delete_node(lst_to_sort, ft_lst_get_value((*lst_to_sort), int_smallest));
		index++;
		count_nodes--;
	}
	(*lst_to_sort) = NULL;
	return (array);
}
