/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_shortest_path.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:30 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/14 18:13:44 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

int	ft_lst_find_shortest_path(t_lst *lst_index, t_lst *lst_dest_up,
		t_lst *lst_dest_down)
{
	size_t	iterations_path_up;
	size_t	iterations_path_down;

	if (lst_index == NULL)
		return (0);
	if (lst_dest_up == NULL && lst_dest_down != NULL)
	{
		iterations_path_down = ft_lst_count_iterations(lst_index,
				lst_dest_down);
		return ((int) iterations_path_down);
	}
	if (lst_dest_down == NULL && lst_dest_up != NULL)
	{
		iterations_path_up = ft_lst_count_iterations(lst_dest_up, lst_index);
		return (((int) iterations_path_up) * -1);
	}
	iterations_path_up = ft_lst_count_iterations(lst_dest_up, lst_index);
	iterations_path_down = ft_lst_count_iterations(lst_index, lst_dest_down);
	if (iterations_path_down < iterations_path_up)
		return ((int) iterations_path_down);
	else if (iterations_path_up < iterations_path_down)
		return (((int) iterations_path_up) * -1);
	else if (iterations_path_down == iterations_path_up)
		return ((int) iterations_path_down);
	return (0);
}
