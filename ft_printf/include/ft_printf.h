/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:14:53 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/01 12:45:42 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIER "cspdiuxX%"

/// @brief		Selfmade and slimmer version of printf (stdio.h)
///				Can handle: %cspdiuxX%
/// @param input
/// @param
/// @return Int of all bytes printed or 0
int		ft_printf(const char *input, ...);

#endif	//	FT_PRINTF_H
