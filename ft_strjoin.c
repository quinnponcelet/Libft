/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:21:23 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/26 20:20:31 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s;

	s = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s)
	{
		s = ft_strcat((char *)s1, s2);
		return (s);
	}
	else
		return (NULL);
}

int		main()
{
	char s[50] = "string1\0";
	char s1[8] = "string2\0";

	printf("strjoin\n%s\n", ft_strjoin(s, s1));
}
