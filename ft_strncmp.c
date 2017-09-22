/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:18:31 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 15:37:47 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main()
{
	char *a = "hello";
	char *b = "heLlo";
	printf("%d\n", strncmp(a, b, 3));
	printf("%d\n", ft_strncmp(a, b, 3));
}
