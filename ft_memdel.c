/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 14:50:30 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/25 16:39:54 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_memdel(void **ap)
{
	free(ap);
	*ap = NULL;
}

int		main()
{
	size_t t = 10;
	char *s1 = "string";
	char *s = (char *)ft_memalloc(t);
	
	ft_strcpy(s, s1);
	printf("%s\n", s);
	ft_memdel((void **)s);
	printf("%s\n", s);
}
