/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:05:04 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/04 12:25:44 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_puts(const char *s);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

char	*ft_strdup(const char *s);

void	ft_cat(int fd);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *str, char const *set);

char	**ft_split(char const *s, char c);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_base(int nb, char *base);

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int nb, int fd);

void	ft_putstr_fd(char *s, int fd);

int		ft_atoi(const char *str);

char	*ft_itoa(int nb);

int		ft_is_base(char c, char *base);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

void	*ft_memchr(const void *memory, int c, size_t n);

int	ft_memcmp(const char *s1, const char *s2, size_t n);

void	ft_striteri(char *str, void (*func)(unsigned int, char *));

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char));

char	*ft_strnstr(const char *str, const char *needle, size_t len);

#endif
