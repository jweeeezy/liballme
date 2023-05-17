/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:54:44 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:47:16 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_STR_H
# define VEC_STR_H
# include <stdlib.h>	// needed for size_t

//	char 	*str;
//	size_t 	size;
//	size_t	buffer;
typedef struct s_vec
{
	char	*str;
	size_t	size_used;
	size_t	size_allocated;
}				t_vec_str;

t_vec_str	*lm_vec_str_add_char(t_vec_str *vec_to_expand, char c_to_add);
void		lm_vec_str_free(t_vec_str *vec_to_free);
t_vec_str	*lm_vec_str_join_delimiter(t_vec_str *vec_to_expand,
				char *str_delimiter, char *str_to_add);
t_vec_str	*lm_vec_str_join(t_vec_str *vec_to_expand, char *str_to_add,
				size_t size_to_add);
t_vec_str	*lm_vec_str_merge_delimiter(t_vec_str *vec_to_merge_to,
				char *str_delimiter, t_vec_str *vec_obsolete);
t_vec_str	*lm_vec_str_merge(t_vec_str *vec_to_merge_to,
				t_vec_str *vec_merged);
t_vec_str	*lm_vec_str_new(const char *str_to_add);

#endif	// VEC_STR_H