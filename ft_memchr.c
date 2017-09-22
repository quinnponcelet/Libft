/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 12:40:17 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 18:41:29 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s == c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);
}

int		main()
{
	char a[32] = "this is a test string";
	char b[32] = "this is a test string";
	printf("%s\n%s\n", memchr(a, 'g', 33), ft_memchr(b, 'g', 33));
}
