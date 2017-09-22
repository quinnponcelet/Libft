/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:31:50 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 18:42:21 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);
}

int		main()
{
	char s[8] = "\0string";
	char s1[7] = "abtde";
	char a[8] = "\0string";
	char a1[7] = "abtde";

	printf("%s\n", ft_memcpy(s, s1, 1));
	printf("%s\n", memcpy(a, a1, 1));
}

