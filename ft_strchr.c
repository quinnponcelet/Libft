/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:06:19 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/20 13:13:34 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}	
	if (!c)
		return ((char *)s);
	return (NULL);
}

int		main()
{
	char *a = "test string";
	int i = '\0';
	char *b = "the ultimate test";
	int j = 't';
	printf("%s\n%s\n", strchr(a, i), strchr(b, j));
	printf("%s\n%s\n", ft_strchr(a, i), ft_strchr(b, j));
}
