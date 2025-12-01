/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:17:56 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/31 16:29:27 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memmove_help(unsigned char *d, unsigned char *s, size_t len)
{
	size_t	i;

	if (d > s)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == src || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	memmove_help(d, s, len);
	return (dst);
}
