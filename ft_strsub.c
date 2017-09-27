/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 17:24:55 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/26 13:50:51 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *s1;
	unsigned int i;

	s1 = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		s1[i] = s[start];
		i++;
		start++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main()
{
	char *s = "this string should make sub strings";

	printf("strsub\n%s\n", ft_strsub(s, 0, 4));
}
