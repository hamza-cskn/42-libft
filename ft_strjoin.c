/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:43:00 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/08 16:10:18 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string)
		return (NULL);
	res = string;
	while (*s1)
		*string++ = *s1++;
	while (*s2)
		*string++ = *s2++;
	*string = '\0';
	return (res);
}
//to check
