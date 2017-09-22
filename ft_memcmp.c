/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele        <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:03:20 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 18:39:13 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int		main()
{
	char *s = "string";
	char *s1 = "string";
	char *s2 = "string";
	char *s3 = "string";

	printf("memcmp:\n%d\nft_memcmp:\n%d\n", memcmp(s, s1, 10), ft_memcmp(s2, s3, 10));
}
