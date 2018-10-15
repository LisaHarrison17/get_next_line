/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:31:36 by lharris           #+#    #+#             */
/*   Updated: 2018/06/19 17:52:58 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strsort(const char *s, char c)
{
	int	sort1;
	int	sort2;

	sort1 = 0;
	sort2 = 0;
	while (s[sort1])
	{
		if (s[sort1] == c)
			;
		else if (!sort1 || !(s[sort1 - 1] == c))
			sort2++;
		sort1++;
	}
	return (sort2);
}
