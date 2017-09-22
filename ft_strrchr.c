/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:35:10 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/20 12:48:57 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int		main()
{
	char *a = "this is a test";
	int i = 't';
	char *b = "the ultimate test";
	int j = '\0';
	char *c = "the last test";
	int l = 'f';
	printf("%s\n%s\n%s\n", strrchr(a, i), strrchr(b, j), strrchr(c, l));
	printf("%s\n%s\n%s\n", ft_strrchr(a, i), ft_strrchr(b, j), ft_strrchr(c, l));
}
