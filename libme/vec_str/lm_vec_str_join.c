/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_str_join.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:19:39 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/01 12:48:22 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>			// needed for ft_strlcat(), ft_strjoin(), free()
#include <libme/vec_str.h>	// needed for t_vec_str, lm_vec_str_new(),
							// lm_vec_str_free()

static t_vec_str	*realloc_vec(char *vec_to_expand, char *str_to_add)
{
	char	*str_temp;
	char	*vec_return;

	str_temp = ft_strjoin(vec_to_expand->str, str_to_add);
	vec_to_return = lm_vec_str_new(str_tmp);
	lm_vec_str_free(vec_to_expand);
	free(str_tmp);
}

t_vec_str	*lm_vec_str_join(t_vec_str *vec_to_expand, char *str_to_add,
				size_t size_to_add)
{
	t_vec_str	*vec_to_return;

	vec_to_return = vec_to_expand;
	if (vec_to_expand == NULL)
	{
		return (lm_vec_str_new(str_to_add));
	}
	if (size_to_add == 0)
	{
		size_to_add = ft_strlen(str_to_add);
	}
	if (vec_to_expand->size_used + size_to_add
		<= vec_to_expand->size_allocated)
	{
		ft_strlcat(vec_to_expand->str, str_to_add,
			vec_to_expand->size_used + size_to_add);
		vec_to_expand->size_used = vec_to_expand->size_used + size_to_add;
	}
	else if (vec_to_expand->size_allocated < size_to_add
		+ vec_to_expand->size_used)
	{
		vec_to_return = realloc_vec(vec_to_expand, str_to_add);
	}
	return (vec_to_return);
}
