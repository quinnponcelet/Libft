/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quintonponcelet <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:56:31 by quintonpo         #+#    #+#             */
/*   Updated: 2017/09/25 17:04:14 by quintonpo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strdel(char **as)
{
	free(as);
	*as = NULL;
}

int		main()
{
	char *s1 = "string";
	char *s = ft_strnew(10);
	ft_strcpy(s, s1);
	printf("%s\n", s);
	ft_strdel((char **)s);
	printf("%s\n", s);
}
