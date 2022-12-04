/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizet_check_poweroftwo.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:58:27 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/04 14:04:57 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	ft_sizet_check_poweroftwo(size_t n_to_check)
{
	if (n_to_check == 0)
		return 0;
	while (n_to_check != 1)
	{
		if (n_to_check % 2 != 0)
			return 0;
		n_to_check = n_to_check / 2;
	}
	return 1;
}
