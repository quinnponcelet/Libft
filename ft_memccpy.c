/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:08:43 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/24 22:09:50 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		if (((char *)src)[i] == c)
		{
			((char *)dst)[i] = ((char *)src)[i];
			return (&dst[i + 1]);
		}
		((char *)dst)[i] = ((char *)src)[i];
			i++;
	}
	return (NULL);
}
