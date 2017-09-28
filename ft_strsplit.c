/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:47:20 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/28 13:08:27 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		mallocsize(char const *s, char c)
{
	int i;
	int t;
	int w;
  
	i = 0;
	w = 0;
	t = 0;
	while (s[i])
	{
		if (s[i] == c)
	    	t = 0;
		else if (!t && s[i])
		{
			t = 1;
			w++;
		}
		i++;
	}
	return (w += 1);
}

int		submallocsize(char const *s, char c, int i)
{
	int cn;

	cn = 0;
	while (s[i] != c && s[i])
	{
		i++;
		cn++;
	}
	return (cn);
}

char	**ft_strsplit(char const *s, char c)
{
	int x;
	int y;
	int i;
	char **a;

	x = 0;
	i = 0;
	a = (char **)malloc(sizeof(char *) * mallocsize(s, c));
	if (!a)
		return (NULL);
	while (s[i])
	{
		y = 0;
		while (s[i] == c)
			i++;
		a[x] = ft_strnew(submallocsize(s, c, i));
		while (s[i] && s[i] != c)
			a[x][y++] = s[i++];
		a[x][y] = '\0';
		x++;
	}
	a[x] = 0;
	return (a);
}
