/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:31:41 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/31 16:20:53 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (i < len && str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && (i + j) < len
			&& str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
