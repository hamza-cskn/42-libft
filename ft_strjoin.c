/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:43:00 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:43:56 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	char	*res;

	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	res = string;
	while (*s1)
		*string++ = *s1++;
	while (*s2)
		*string++ = *s2++;
	*string = '\0';
	return (res);
}
//to check
