/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:58:17 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/10 11:58:39 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_exit_with_error(char *error_message, int exit_status)
{
	ft_printf("%s\n", error_message);
	exit(exit_status);
}
