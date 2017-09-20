/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:32:38 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/19 18:49:59 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
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
    int x;
    char str[9] = "str";
    char str1[5] = "stri";
    //    printf("%lu\n%s\n%s\n", strlcat(str, str1, 6), str, str1);
    printf("%lu\n%s\n%s\n", ft_strlcat(str, str1, 6), str, str1);
	//    printf("%lu\n%zu\n", strlcat(str, str1, 9), ft_strlcat(str, str1, 9));
}
	
