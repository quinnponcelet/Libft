/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:09:00 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 10:22:40 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

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
