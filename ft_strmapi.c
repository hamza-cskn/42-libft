/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:48:12 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/04 17:10:22 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	char	*result;
	size_t	len;
	int		i;

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

char any_func(unsigned int index, char c) {
    return c + 1;
}

char another_func(unsigned int index, char c) {
    return c + 2;
}
#include <stdio.h>
int main() {
    printf("%s\n", ft_strmapi("test", any_func));
    printf("%s\n", ft_strmapi("test", another_func));
}