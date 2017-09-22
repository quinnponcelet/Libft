/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:25:41 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 16:29:39 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int		main()
{
	int a = 0;
	int b = 127;
	int c = 128;
	int d = -1;
	
	printf("%d\n%d\n%d\n%d\n", isascii(a), isascii(b), isascii(c), isascii(d));
	printf("%d\n%d\n%d\n%d\n", ft_isascii(a), ft_isascii(b), ft_isascii(c), ft_isascii(d));
}
