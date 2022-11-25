/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_merge_needle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:18:48 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/25 15:52:24 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static int	needle_check(const char **str_array, size_t *index_array)
{
	while (str_array[0][index_array[0] + index_array[1]]
		== str_array[1][index_array[1]]
		&& str_array[1][index_array[1]] != '\0')
	{
		if (str_array[1][index_array[1] + 1] == '\0')
		{
			index_array[1]++;
			while (str_array[0][index_array[0] + index_array[1]
				+ index_array[2]]
					== str_array[2][index_array[2]])
			{
				if (str_array[2][index_array[2] + 1] == '\0')
					return (1);
				index_array[2]++;
			}
		}
		index_array[2] = 0;
		index_array[1]++;
	}
	index_array[1] = 0;
	index_array[2] = 0;
	return (0);
}

static void	*needle_copy_merge(const char **str_array, size_t *index_array,
				char *str_return)
{
	while (str_array[3][index_array[3]] != '\0')
	str_return[index_array[4]++] = str_array[3][index_array[3]++];
	index_array[3] = 0;
	return (str_return);
}

static char	*haystack_merge_needles(const char **str_array,
				size_t *index_array, char *str_return)
{
	if (str_return == NULL)
		return (NULL);
	while (str_array[0][index_array[0]] != '\0')
	{
		if (str_array[0][index_array[0]] == str_array[1][0])
		{
			if (needle_check(str_array, index_array) == 1)
			{
				needle_copy_merge(str_array, index_array, str_return);
			}
		}
		if (str_array[0][index_array[0]] == str_array[2][0])
		{
			if (needle_check(str_array, index_array) == 1)
				needle_copy_merge(str_array, index_array, str_return);
		}
		str_return[index_array[4]++] = str_array[0][index_array[0]++];
	}
	str_return[index_array[4]] = '\0';
	return (str_return);
}

static char	*prepare_merge(const char **str_array)
{
	char	*str_return;
	size_t	*index_array;
	size_t occasions;

	index_array = ft_array_index_init(4);
	if (index_array == NULL)
		return (NULL);
	occasions = ft_str_count_needle_occasions(str_array[0], str_array[1],
					str_array[2]);
	if (occasions == 0)
		return (ft_strdup(str_array[0]));
	str_return = (char *) malloc (sizeof (char) * (ft_strlen(str_array[0]))
			- (occasions * (ft_strlen(str_array[1])
					+ ft_strlen(str_array[2]) - ft_strlen(str_array[3]))) + 1);
	if (str_return == NULL)
		return (NULL);
	str_return = haystack_merge_needles(str_array, index_array, str_return);
	free (index_array);
	return (str_return);
}

char	*ft_str_merge_needles(char *haystack, const char *needle_a,
			const char *needle_b, const char *needle_merge)
{
	const char	**str_array;
	char		*str_return;

	if (haystack == NULL)
		return (NULL);
	str_array = (const char **) malloc (sizeof (char *) * 4);
	if (str_array == NULL)
		return (NULL);
	str_array[0] = haystack;
	str_array[1] = needle_a;
	str_array[2] = needle_b;
	str_array[3] = needle_merge;
	str_return = prepare_merge(str_array);
	free (str_array);
	return (str_return);
}
