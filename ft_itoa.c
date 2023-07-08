/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:20:00 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/09 01:29:37 by hcoskun          ###   ########.fr       */
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

char	*get_min_int_string(void)
{
	char	*result;

	result = (char *) malloc(sizeof(char) * 12);
	if (!result)
		return (NULL);
	ft_strlcpy(result, "-2147483648", 12);
	return (result);
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
			return (get_min_int_string());
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
