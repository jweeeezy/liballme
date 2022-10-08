/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:14:53 by jwillert          #+#    #+#             */
/*   Updated: 2022/06/12 17:24:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIER "cspdiuxX%"
# include <stdarg.h>
# include "ft_printf_utils_str.h"
# include "ft_printf_utils_nbr.h"
# include "libme.h"

//	selfmade and slimmer version of printf (42 mandatory part only)
int		ft_printf(const char *input, ...);

#endif
