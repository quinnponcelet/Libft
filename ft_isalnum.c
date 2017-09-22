/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:17:42 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 16:24:50 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'a'))
		return (1);
	return (0);
}

int		main()
{
	int a = 'a';
	int b = 'Z';
	int c = '/';
	printf("%d\n%d\n%d\n", ft_isalnum(a), ft_isalnum(b), ft_isalnum(c));
}
