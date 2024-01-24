/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:20:00 by hcoskun42         #+#    #+#             */
/*   Updated: 2024/01/24 09:32:57 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digits(unsigned int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	natural_itoa(int nb, char *str)
{
	if (nb >= 10)
		natural_itoa(nb / 10, str - 1);
	*str = nb % 10 + '0';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		is_negative;

	is_negative = n < 0;
	if (is_negative)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = -n;
	}
	len = digits(n) + is_negative;
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (is_negative)
		*result = '-';
	natural_itoa(n, result + len - 1);
	result[len] = '\0';
	return (result);
}
