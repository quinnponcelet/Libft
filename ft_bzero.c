/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 19:57:56 by qponcele          #+#    #+#             */
/*   Updated: 2017/09/21 12:36:35 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int		main()
{
	char s[7]="\0tring\0";
	char s1[7] = "\0tring\0";
	ft_bzero(s, 4);
	bzero(s1, 4);
	printf("Strings:\n%s\n%s\n", s, s1);
	printf("Chars:\n%c%c%c%c%c%c%c\n", s[0], s[1],s[2], s[3], s[4], s[5], s[6]);
	printf("%c%c%c%c%c%c%c\n", s1[0], s1[1],s1[2], s1[3], s1[4], s1[5], s1[6]);
}
