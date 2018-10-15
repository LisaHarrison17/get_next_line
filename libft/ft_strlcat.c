/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:55:28 by lharris           #+#    #+#             */
/*   Updated: 2018/06/13 16:48:44 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (dst[len] && len < n)
		len++;
	while (src[i] && (len + i + 1) < n)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (len != n)
		dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
