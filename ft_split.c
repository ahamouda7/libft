/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:41:44 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/26 12:13:40 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_len(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**free_mem(char **s, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(s);
	return (NULL);
}

static char	*duplicate(char const *s, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	process_word(char const **s, char c, char **res, size_t *i)
{
	size_t		len;
	char const	*start;

	start = *s;
	len = 0;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	res[*i] = duplicate(start, len);
	(*i)++;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	if (!s)
		return (NULL);
	res = malloc((words_len(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
			process_word(&s, c, res, &i);
		else
			s++;
		if (i > 0 && !res[i - 1])
			return (free_mem(res, i - 1));
	}
	res[i] = NULL;
	return (res);
}
