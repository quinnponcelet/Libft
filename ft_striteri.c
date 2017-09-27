/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:41:29 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/26 16:55:15 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int		main()
{
	char s[50] = "string to iterate\0";
	
	printf("striteri\n%s\n", s);
	ft_striteri(s, &ft_touppertest);
	printf("%s\n", s);
}
