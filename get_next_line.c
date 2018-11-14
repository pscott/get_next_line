/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:09:01 by pscott            #+#    #+#             */
/*   Updated: 2018/11/13 20:00:42 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	char		*buf;
	int			len;
	static int	inter;
	int			ret;
	int			i;
	

	i = 0;
	while ((*line)[i])
		{
			(*line)[i] = 0;
			i++;
		}
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if ((len = num_char(buf)) < BUFF_SIZE)
		{
			*line = ft_strnjoin(*line, buf, len);
			inter = ret - len;
			return (1);
		}
		else
			*line = ft_strjoin(*line, buf);
	}
	free(buf);
	return (ret);
}
