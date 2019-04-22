/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:11:00 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/19 17:39:46 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;
	size_t	len_s;

	i = 0;
	len_s = 0;
	if (s)
		len_s = ft_strlen(s);
	ret = ft_memalloc(len + 1);
	if (start >= len_s)
		return (ret);
	if (!ret)
		return (NULL);
	while (i < len)
	{
		if (start + i < len_s)
			ret[i] = ((char*)s)[start + i];
		i++;
	}
	return (ret);
}
