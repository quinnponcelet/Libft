/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:16:02 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/25 16:27:27 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void *s;
	
	s = (void *)malloc(sizeof(void) * size);
	ft_bzero(s, size);
	return (s);
}
 /*
int		main()
{
	size_t s = 10;
	
	printf("%s\n", (char *)ft_memalloc(s));
}
*/
