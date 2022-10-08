/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:20:54 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 14:56:50 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c_to_check)
{
	if ((c_to_check > 64 && c_to_check < 91)
		|| (c_to_check > 96 && c_to_check < 123))
		return (1);
	return (0);
}
