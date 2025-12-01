/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:23:17 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/26 12:15:03 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;
	size_t	total;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l <= start)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	total = l - start;
	if (total > len)
		total = len;
	str = malloc(total + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, total + 1);
	return (str);
}
