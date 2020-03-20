/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:02:22 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/18 13:14:05 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (const char)c)
		{
			ptr = &(((char*)s)[i]);
			return (ptr);
		}
		i++;
	}
	if (s[i] == (const char)c)
		ptr = &(((char*)s)[i]);
	return (ptr);
}
