/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:49:36 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/26 12:11:40 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	num;

	num = n;
	i = ft_numlen(n);
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num)
	{
		res[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
