/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:32:38 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 19:10:29 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	int s;

	i = ft_strlen(dst);
	j = 0;
	s = ft_strlen(dst);
	if (i > size)
		return (ft_strlen((char*)src) + size);
	else
		while (i < size - 1)
			dst[i++] = src[j++];
	return (s + ft_strlen((char*)src));
}

int main()
{
    char str[9] = "str";
    char str1[5] = "stri";
	char s[9] = "str";
	char s1[5] = "stri";
    printf("%lu\n%s\n%s\n", strlcat(str, str1, 6), str, str1);
    printf("%lu\n%s\n%s\n", ft_strlcat(s, s1, 6), s, s1);
	//    printf("%lu\n%zu\n", strlcat(str, str1, 9), ft_strlcat(str, str1, 9));
}
	
