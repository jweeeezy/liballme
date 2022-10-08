/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:34:09 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 16:04:24 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c_to_change)
{
	if (c_to_change >= 'a' && c_to_change <= 'z')
		c_to_change = (c_to_change - 32);
	return (c_to_change);
}
