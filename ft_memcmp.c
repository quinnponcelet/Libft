/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele        <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:03:20 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/24 14:52:29 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s;
	unsigned char *st;

	i = 0;
	s = ((unsigned char *)s1);
	st = ((unsigned char *)s2);
	while (n--)
	{
		if (s[i] != st[i])
			return (s[i] - st[i]);
		i++;
			
	}
	return (0);
}
