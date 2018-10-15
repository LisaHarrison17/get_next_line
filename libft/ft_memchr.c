/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:00:23 by lharris           #+#    #+#             */
/*   Updated: 2018/05/31 13:19:22 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char			*s;
	unsigned int	i;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (0);
}
