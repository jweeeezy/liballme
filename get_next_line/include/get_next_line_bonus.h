/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:53:29 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/12 17:42:41 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/// @brief		Reads "BUFFER_SIZE" (MACRO) bytes of a file (fd) and returns
///				a string (with malloc) containing everything until the
///				first/next 'new line' character
/// @param fd
/// @return 	Current line or NULL if End of File / Error occured
char	*get_next_line(int fd);
//
//
/// @brief		Combines (and frees) two strings into one (with malloc)
/// @param string_first
/// @param string_second
/// @return Newly allocated string or NULL
char	*gnl_strjoin(char *string_first, char *string_second);
//
//
/// @brief		Appends a string after another string and NULL terminates
/// @param string_target
/// @param string_source
/// @param size_needed
/// @return 	Size_t of combined strlen or 0
size_t	gnl_strlcat(char *string_target,
			char *string_source, size_t size_needed);
//
//
/// @brief		Copies Values of one string to another string
/// @param string_target
/// @param string_source
/// @param size_needed
/// @return		Size_t of strlen
size_t	gnl_strlcpy(char *string_target,
			char *string_source, size_t size_needed);
//
//
/// @brief		Counts bytes of a string
/// @param string
/// @return Size_t of all bytes
size_t	gnl_strlen(const char *string);

#endif
