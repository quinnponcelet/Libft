/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:10:48 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 16:15:49 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		main()
{
	int	a = '0';
	int b = '9';
	int c = 'a';
	printf("%d\n%d\n%d\n", ft_isdigit(a), ft_isdigit(b), ft_isdigit(c));
}
