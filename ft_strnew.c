/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:41:49 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/25 17:05:26 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char *)malloc(sizeof(char) * size);
	ft_bzero(s, size);
	return (s);
}
/*
int		main()
{
	char *s = ft_strnew(10);
	printf("%s\n", s);
}
*/
