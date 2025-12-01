/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:37:14 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/31 16:29:13 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
