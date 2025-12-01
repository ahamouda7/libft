/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:57:06 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/31 16:13:00 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dest >= dstsize || dstsize == 0)
		return (len_src + dstsize);
	i = 0;
	while (src[i] && (i + len_dest < dstsize - 1))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_src + len_dest);
}
