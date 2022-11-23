/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_merge_needles.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:07:02 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/23 22:19:37 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static char	needle_count_occasions(const char *haystack,
				const char *needle_first, const char *needle_second,
				size_t index_haystack)
{
	size_t	index_needle_first;
	size_t	index_needle_second;

	index_needle_first = 0;
	index_needle_second = 0;
	while (haystack[index_haystack + index_needle_first]
		== needle_first[index_needle_first]
		&& needle_first[index_needle_first] != '\0')
	{
		if (needle_first[index_needle_first + 1] == '\0')
		{
			index_needle_first++;
			while (haystack[index_haystack + index_needle_first
					+ index_needle_second]
				== needle_second[index_needle_second])
			{
				if (needle_second[index_needle_second + 1] == '\0')
					return (1);
				index_needle_second++;
			}
		}
		index_needle_second = 0;
		index_needle_first++;
	}
	return (0);
}

static size_t	haystack_count_needle_occasions(const char *haystack,
					const char *needle_a, const char *needle_b)
{
	size_t	index_haystack;
	size_t	counter_occasions;

	index_haystack = 0;
	counter_occasions = 0;
	while (haystack[index_haystack] != '\0')
	{
		if (haystack[index_haystack] == needle_a[0])
		{
			if (needle_count_occasions(haystack, needle_a,
					needle_b, index_haystack) == 1)
			{
				counter_occasions++;
				index_haystack = index_haystack + ft_strlen(needle_a)
					+ ft_strlen(needle_b);
			}
		}
		if (haystack[index_haystack] == needle_b[0])
		{
			if (needle_count_occasions(haystack, needle_b,
					needle_a, index_haystack) == 1)
			{
				counter_occasions++;
				index_haystack = index_haystack + ft_strlen(needle_a)
					+ ft_strlen(needle_b);
			}
		}
		index_haystack++;
	}
	return (counter_occasions);
}

static int	needle_check_and_copy(const char *haystack,
				const char *needle_first,
				const char *needle_second, size_t index_haystack)
{
	size_t	index_needle_first;
	size_t	index_needle_second;
	size_t	index_merge;

	index_needle_first = 0;
	index_needle_second = 0;
	index_merge = 0;
	while (haystack[index_haystack + index_needle_first]
		== needle_first[index_needle_first]
		&& needle_first[index_needle_first] != '\0')
	{
		if (needle_first[index_needle_first + 1] == '\0')
		{
			index_needle_first++;
			while (haystack[index_haystack + index_needle_first
					+ index_needle_second]
				== needle_second[index_needle_second])
			{
				if (needle_second[index_needle_second + 1] == '\0')
					return (1);
				index_needle_second++;
			}
		}
		index_needle_second = 0;
		index_needle_first++;
	}
	return (0);
}

static char	*haystack_merge(const char *haystack,
				const char *needle_a,
				const char *needle_b,
				const char *needle_merge,
				char *str_copy)
{
	size_t		index_haystack;
	size_t		index_copy;
	size_t		index_merge;
	char		*str_return;

	index_copy = 0;
	index_haystack = 0;
	index_merge = 0;
	while (haystack[index_haystack] != '\0')
	{
		if (haystack[index_haystack] == needle_a[0])
		{
			if (needle_check_and_copy(haystack, needle_a,
					needle_b, index_haystack) == 1)
			{
				while (needle_merge[index_merge] != '\0')
					str_copy[index_copy++] = needle_merge[index_merge++];
				index_merge = 0;
				index_haystack = index_haystack
					+ ft_strlen(needle_a) + ft_strlen(needle_b);
			}
		}
		if (haystack[index_haystack] == needle_b[0])
		{
			if (needle_check_and_copy(haystack, needle_b,
					needle_a, index_haystack) == 1)
			{
				while (needle_merge[index_merge] != '\0')
					str_copy[index_copy++] = needle_merge[index_merge++];
				index_merge = 0;
				index_haystack = index_haystack
					+ ft_strlen(needle_a) + ft_strlen(needle_b);
			}
		}
		str_copy[index_copy++] = haystack[index_haystack++];
	}
	str_copy[index_copy] = '\0';
	return (str_copy);
}

char	*ft_str_merge_needles(const char *haystack, const char *needle_a,
			const char *needle_b, const char *needle_merge)
{
	char	*str_return;
	size_t	counter_occasions;
	size_t	size_malloc;

	counter_occasions = haystack_count_needle_occasions(haystack,
			needle_a, needle_b);
	size_malloc = (sizeof (char) * (ft_strlen(haystack))
			- (counter_occasions * (ft_strlen(needle_a)
					+ ft_strlen(needle_b) - ft_strlen(needle_merge))) + 1);
	str_return = (char *) malloc (sizeof (char) * (ft_strlen(haystack))
			- (counter_occasions * (ft_strlen(needle_a) + ft_strlen(needle_b)
					- ft_strlen(needle_merge))) + 1);
	if (str_return == NULL)
		return (NULL);
	str_return = haystack_merge(haystack, needle_a,
			needle_b, needle_merge, str_return);
	return (str_return);
}
