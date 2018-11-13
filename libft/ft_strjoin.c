/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:46:13 by pscott            #+#    #+#             */
/*   Updated: 2018/11/11 19:03:35 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*r;
	size_t		i;
	size_t		j;

	if (s1 && s2)
	{
		if (!(r = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		i = 0;
		while (s1[i])
		{
			r[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
		{
			r[i] = s2[j];
			i++;
			j++;
		}
		return (r);
	}
	return (NULL);
}
