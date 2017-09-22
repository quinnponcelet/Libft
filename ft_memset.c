/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:57:26 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 18:44:27 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while ((unsigned char *)b && i < len)
	{
		((unsigned char *)b)[i] = c;
		++i;
	}
	return (b);
}	
