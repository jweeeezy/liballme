/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:53:29 by jwillert          #+#    #+#             */
/*   Updated: 2022/07/10 14:45:18 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//	Each call reads (BUFFER_SIZE * bytes) from a file descriptor
//	returning the first line it encounters, saving spare bytes that
//	were read in a static_buffer
//	|| (RETURN) Line read from a file descriptor
char	*get_next_line(int fd);
//	Takes string_first and string_second and first copies values
//	from string_first (strlcpy) and then appends values of string_second
//	to a newly *MALLOCED* string (strlcat) || (GNL) frees string_first
//	|| (RETURN) newly allocated string
char	*gnl_strjoin(char *string_first, char *string_second);
//	Takes address of string_target and appends values from string_source
//	to the end of string_target and guarantees NULL termination (special cases)
//	size_needed has to be large enough || (RETURN) length of appended string
size_t	gnl_strlcat(char *string_target,
			char *string_source, size_t size_needed);
//	Takes address of string_target and copies values from string_source
//	to string_target and guarantees NULL termination (special cases)
//	size_needed has to be large enough || (RETURN) length of string_source
size_t	gnl_strlcpy(char *string_target,
			char *string_source, size_t size_needed);
//	Takes address of string and counts the length || (RETURN) length of string
size_t	gnl_strlen(const char *string);

#endif

