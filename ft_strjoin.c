/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:43:00 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/10 15:22:52 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		size;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s2));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = malloc(sizeof(char) * size);
	if (!string)
		return (NULL);
	ft_strlcpy(string, s1, size);
	ft_strlcat(string, s2, size);
	return (string);
}
