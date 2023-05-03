/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_fetch_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:50:29 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 18:57:08 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libme/lst.h>	// needed for t_lst

int	lm_lst_fetch_value(t_lst *lst_index)
{
	return (lst_index->content);
}
