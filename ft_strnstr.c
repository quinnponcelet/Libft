/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:20:36 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/24 15:17:26 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
