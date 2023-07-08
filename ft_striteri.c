/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:41:50 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/08 16:11:10 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*func)(unsigned int, char *))
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		func(i, str + i);
		i++;
	}
}
