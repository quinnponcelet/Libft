/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmrear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:56:26 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/03 12:57:16 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_trmrear(char const *s, int i)
{
	int	j;

	j = ft_strlen(s) - 1;
	while (s[j] <= ' ' && j > i)
		j--;
	return (j);
}