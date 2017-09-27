/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 19:44:11 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/26 19:55:51 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *s1;
	unsigned i;

	s1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (s1)
	{
		while (s[i])
		{
			s1[i] = f(i, s[i]);
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

	printf("strmapi\n%s\n", s);
	printf("%s\n", ft_strmapi(s, &ft_touppertest));
}
