/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:08:43 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 18:13:59 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i; 
	i = 0;
	while (n--)
	{
		if (((unsigned char *)src)[i] == c)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			return (&dst[i + 1]);
		}
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
	}
	return (NULL);
}

int		main()
{
	char s[8] = "sswring";
	char s1[7];
	char a[8] = "sswring";
	char a1[7];
	char s2[64] = "thisstringiswaytoolongsoitshouldbreak\0";
	char s3[32];
	char s4[64] = "thisstringiswaytoolongsoitshouldbreak\0";
	char s5[32];
	char a2[64] = "stringisneat\0";
	char d[32];

	printf("memccpy :%s: %s ", memccpy(s3, s2, 'w', 16), s3);
	printf(":%s: %s\n", memccpy(d, a2, 'a', 13), d);
	printf("ft_memccpy :%s: %s\n", ft_memccpy(s5, s4, 'w', 16), s5); 
	printf(":%s:\n%s\n", memccpy(s1, s,'w', 5), s1);
	printf(":%s:\n%s\n", ft_memccpy(a1, a,'w', 5), a1);
}
