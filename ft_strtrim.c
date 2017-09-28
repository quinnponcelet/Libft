/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:48:44 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/28 13:05:18 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		whitespaces1(char const *s)
{
	int i;

	i = 0;
	while (s[i] <= ' ' && s[i])
		i++;
	return (i);
}

int		whitespaces2(char const *s, int i)
{
	int	j;

	j = ft_strlen(s) - 1;
	while (s[j] <= ' ' && j > i)
		j--;
	return (j);
}

char	*ft_strtrim(char const *s)
{
	char *s1;
	int i;
	int j;
	int c;

	i = whitespaces1(s);
	j = whitespaces2(s, i);
	c = 0;
	s1 = ft_strnew(j - i);
	if (!s1)
		return (NULL);
	while (i <= j)
		s1[c++] = s[i++];
	return (s1);
}
