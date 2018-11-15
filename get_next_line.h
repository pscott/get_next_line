/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:09:34 by pscott            #+#    #+#             */
/*   Updated: 2018/11/14 17:23:02 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_fdlist
{
	char			*c;
	int				fd;
	struct s_fdlist	*next;
	struct s_fdlist *prev;

}					t_fdlist;

int					get_next_line(const int fd, char **line);

#endif
