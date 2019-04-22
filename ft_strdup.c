/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:00:16 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/18 13:14:05 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	i;

	ret = ft_memalloc(ft_strlen(s) + 1);
	if (ret)
	{
		i = 0;
		while (s[i])
		{
			((unsigned char*)ret)[i] = ((unsigned char*)s)[i];
			i++;
		}
		((unsigned char*)ret)[i] = ((unsigned char*)s)[i];
	}
	return (ret);
}
