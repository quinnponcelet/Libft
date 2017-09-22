/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:30:11 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 12:52:20 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strcpy(char *s2, char *s1);
char	*ft_strdup(char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strlen(const char *str);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, char *src, int len);
char	*itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_putendl(char const *s);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memmove(void *dst, void *src, size_t len);

#endif
