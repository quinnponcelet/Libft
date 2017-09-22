/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:09:08 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 15:46:43 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int s;
	int n;

	i = 0;
	s = 0;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' 
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		s = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		if (s == 0)
			n = n + (str[i] - '0');
		if (s == 1)
			n = n - (str[i] - '0');
		i++;
	}
	return (n);
}

int		main()
{
	char *a = "2147483647";
	char *b = "-2147483648";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
}

