/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:14:53 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/12 17:44:32 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIER "cspdiuxX%"
# include <stdarg.h>
# include "ft_printf_utils_str.h"
# include "ft_printf_utils_nbr.h"
# include "libme.h"

/// @brief		Selfmade and slimmer version of printf (stdio.h)
///				Can handle: %cspdiuxX%
/// @param input
/// @param
/// @return Int of all bytes printed or 0
int		ft_printf(const char *input, ...);

#endif
