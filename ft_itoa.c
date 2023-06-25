/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:20:00 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 20:28:47 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(unsigned int n)
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

static void	natural_itoa(int nb, char *str)
{
	if (nb >= 10)
		natural_itoa(nb / 10, str - 1);
	*str = nb % 10 + '0';
}

char	*ft_itoa(int nb)
{
	char	*result;
	int		len;
	int		is_negative;

	is_negative = nb < 0;
	if (is_negative)
	{
		if (nb == -2147483648)
		{
			result = (char *) malloc(sizeof(char) * 12);
			ft_strlcpy(result, "-2147483648", 12);
			return (result);
		}
		nb = -nb;
	}
	len = digits(nb) + is_negative;
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (is_negative)
		*result = '-';
	natural_itoa(nb, result + len - 1);
	result[len] = '\0';
	return (result);
}
