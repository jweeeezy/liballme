/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:58:17 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/10 14:06:25 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_exit_with_error(char *error_message, int exit_status)
{
	ft_putstr_fd(error_message, 2);
	exit(exit_status);
}
