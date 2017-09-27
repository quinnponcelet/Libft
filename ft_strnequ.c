/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:38:00 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/25 11:54:24 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		return (0);
	return (1);
}

int		main()
{
	char *s = "string";
	char *s1 = "strind";

	printf("strnequ\n%d\n%d\n", ft_strnequ(s, s1, 5), ft_strnequ(s, s1, 6));
}
