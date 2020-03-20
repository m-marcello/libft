/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:02:36 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/22 16:30:54 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	ptr = NULL;
	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == (char)c)
		{
			ptr = &(((char*)s)[i]);
			return (ptr);
		}
		i--;
	}
	if (s[0] == (char)c)
		ptr = &(((char*)s)[i]);
	return (ptr);
}
