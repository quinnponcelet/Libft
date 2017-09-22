/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:52:45 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 16:03:53 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int		main()
{
	int a = 'a';
	int b = 'z';
	int c = 34;

	printf("%d\n%d\n%d\n", isalpha(a), isalpha(b), isalpha(c));
	printf("%d\n%d\n%d\n", ft_isalpha(a), ft_isalpha(b), ft_isalpha(c));
}
