/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 17:13:01 by lharris           #+#    #+#             */
/*   Updated: 2018/10/15 16:10:27 by lharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BUFF_SIZE 50

int		get_next_line(const int fd, char **line);

#endif
