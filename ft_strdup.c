/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:27:29 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/18 14:27:48 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i;
	int l;
	char *s;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	s = (char *)malloc(sizeof(char) * l);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}

int		main()
{
	char *s = "hello world";
	printf("%s", ft_strdup(s));
}
