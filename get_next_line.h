/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:09:34 by pscott            #+#    #+#             */
/*   Updated: 2018/11/13 18:04:55 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);
#endif
