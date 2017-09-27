/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 17:43:54 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/26 19:51:21 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *s1;
	unsigned i;

	i = 0;
	s1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (s1)
	{
		while (s[i])
		{
			s1[i] = f(s[i]);
			i++;
		}
		s1[i] = '\0';
		return (s1);
	}
	else
		return (NULL);
}

int		main()
{
	char *s = "string to map";
	
	printf("strmap\n%s\n", s);
	printf("%s\n", ft_strmap(s, &ft_touppertest));
}
