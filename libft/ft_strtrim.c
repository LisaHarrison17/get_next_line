/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:54:25 by lharris           #+#    #+#             */
/*   Updated: 2018/06/23 15:38:11 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	len;
	char			*str;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (!(str = (char *)malloc(sizeof(char) * (len - i + 2))))
		return (NULL);
	while (n < len - i + 1)
	{
		str[n] = s[i + n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
