/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:20:36 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/20 14:30:25 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while (big[j])
	{
		i = 0;
		while (big[j] == little[i] && big[j] && i < len)
		{
			i++;
			j++;
		}
		if (!little[i])
			return ((char *)&big[j - i]);
		j++;
	}
	return (NULL);
}

int		main()
{
	char *a = "\0\0\0\0\0\0";
	char *b = "\0\0\0\0";
	printf("%s\n", strnstr(a, b, 25));
	printf("%s\n", ft_strnstr(a, b, 25));
}
