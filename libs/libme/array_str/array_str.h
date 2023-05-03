/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:46:02 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 18:48:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_STR_H
# define ARRAY_STR_H

size_t	lm_array_str_count_length(char **array_to_count);
size_t	lm_array_str_count_arguments(char **array_to_count);
void	lm_array_print_fd(char **array_to_print, int fd_target);
void	lm_array_str_free(char **array_to_free);

#endif	// ARRAY_STR_H