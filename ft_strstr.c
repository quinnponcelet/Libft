/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:27:38 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/21 16:51:38 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)big);
	while (big[j])
	{
		i = 0;
		while (big[j] == little[i] && big[j])
		{
			i++;
			j++;
		}
		if (!little[i])
			return((char *)&big[j - i]);
		j++;
	}
	return (NULL);
}

int		main()
{
	char *h = "\0\0\0\0\0\0\0";
	char *n = "\0\0\0";

	printf("%s\n", strstr(h, n));
	printf("%s\n", ft_strstr(h, n));
}
