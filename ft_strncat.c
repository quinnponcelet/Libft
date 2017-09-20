/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:09:00 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/19 16:41:09 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = 0;
	while (j < n)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char a[50] = "helloppppppppppppppppppppppp\0";
	char b[50] = "yello\0";

	printf("%s", ft_strncat(a, b, 3));
}
