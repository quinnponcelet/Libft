/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:47:20 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/28 16:13:10 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*substring(char const *s, char c, unsigned int *i)
{
	unsigned j;
	unsigned st;
	char *str;

	while (s[*i] == c && s[*i])
		(*i)++;
	st = *i;
	while (s[*i] != c && s[*i])
		(*i)++;
	if (!(str = ft_strnew(*i - st)))
		return (NULL);
	j = 0;
	while (st < *i)
		str[j++] = s[st++];
	str[j] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned i;
	unsigned j;
	unsigned w;
	char **a;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			w++;
		i++;
	}
	if (!(a = (char **)malloc(sizeof(char *) * (w + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < w)
		a[i++] = substring(s, c, &j);
	a[i] = 0;
	return (a);
}
