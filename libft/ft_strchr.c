/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:36:02 by pscott            #+#    #+#             */
/*   Updated: 2018/11/09 13:13:05 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *res;

	res = (char *)s;
	while (*res)
	{
		if (*res == c)
			return (res);
		res++;
	}
	if (*res == c)
		return (res);
	return (NULL);
}
