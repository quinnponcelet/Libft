/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 22:33:25 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 19:10:06 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t i;
	
	i = 0;
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
}

int		main()
{
	char a[32] = "Hello this is a test string";
	//char b[16];
	char c[32] = "Hello this is a test string";
	//char d[16];


	printf("%s\n%s\n", memmove(a + 5, a, 26), ft_memmove(c + 5, c, 26));
}
