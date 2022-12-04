/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_header_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:17:32 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/30 21:56:09 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_lst_header_free(t_lst_header **lst_to_free)
{
	ft_lst_free(((*lst_to_free))->head);
	free((*lst_to_free));
}
