/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:20:31 by lharris           #+#    #+#             */
/*   Updated: 2018/06/23 16:00:03 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;
	int		ncpy;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!n)
		return (NULL);
	ncpy = n;
	len = ft_nbrlen(n);
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	nbr[len] = '\0';
	len--;
	while (len >= 0)
	{
		nbr[len] = ft_ifneg(n) % 10 + '0';
		n = ft_ifneg(n) / 10;
		len--;
	}
	if (ncpy < 0)
		nbr[0] = '-';
	return (nbr);
}
