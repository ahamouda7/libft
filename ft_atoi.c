/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaberran <aaberran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:47:08 by aaberran          #+#    #+#             */
/*   Updated: 2025/10/26 12:10:37 by aaberran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(long long r, int digit, int sign)
{
	if (r > 9223372036854775807 / 10
		|| (r == 9223372036854775807 / 10 && digit > 7))
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check_overflow(result, str[i] - '0', sign) != 1)
			return (check_overflow(result, str[i] - '0', sign));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
