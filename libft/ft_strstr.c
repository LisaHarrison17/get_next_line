/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:49:17 by lharris           #+#    #+#             */
/*   Updated: 2018/06/12 15:09:44 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		size;
	int		j;

	i = 0;
	size = 0;
	j = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s2[j] == s1[i + j])
		{
			if (j == size - 1)
				return ((char *)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
