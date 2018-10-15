/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:40:18 by lharris           #+#    #+#             */
/*   Updated: 2018/06/05 12:24:54 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (s2 < s1)
	{
		while (n-- > 0)
			s1[n] = s2[n];
	}
	else
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (s1);
}
