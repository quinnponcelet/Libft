/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:25:26 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/26 19:50:53 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}

int		main()
{
	char s[50] = "string to iterate\0";

	printf("striter\n%s\n", s);
	ft_striter(s, &ft_touppertest);
	printf("%s\n", s);
}
