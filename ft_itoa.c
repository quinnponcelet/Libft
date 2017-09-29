/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 23:02:42 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/28 19:02:22 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*stringbuilder(long *n, size_t *c)
{
	char	*s;
	long	n1;
	size_t	t;
	
	t = 0;
	if (*n < 0)
	{
		*n *= -1;
		t++;
	}
	n1 = *n;
	while (n1 /= 10)
		(*c)++;
	(*c) += t;
	if (!(s = ft_strnew(*c)))
		return (NULL);
	else if (t > 0)
		s[0] = '-';
	s[*c] = '\0';
	return (s);
}	

char	*ft_itoa(int n)
{
	char 	*s;
	long	nbr;
	size_t	c;

	c = 1;
	nbr = n;
	if (!(s = stringbuilder(&nbr, &c)))
		return (NULL);
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 9)
	{
		s[--c] = (nbr % 10) + 48;
		nbr /= 10;
	}
	s[--c] = (nbr % 10) + 48;
	return (s);
}
