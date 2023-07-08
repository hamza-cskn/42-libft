/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:48:12 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/08 16:10:12 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	char	*result;
	size_t	len;
	int		i;

	if (!str || !func)
		return (NULL);
	len = ft_strlen(str);
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = func(i, str[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
