/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:55:40 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:56:35 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	natural_atoi(const char *str)
{
	unsigned int	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}

int ft_atoi(const char *str)
{
	int sign = 1;
	if (!str)
		return 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (!*str)
		return 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	return sign * natural_atoi(str);
}