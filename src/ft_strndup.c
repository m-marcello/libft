/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strndup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:00:16 by mmarcell      #+#    #+#                 */
/*   Updated: 2021/05/14 11:59:31 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*ret;
	size_t	i;

	if (s == NULL)
		return (NULL);
	ret = ft_strnew(n);
	if (ret != NULL)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char*)ret)[i] = ((unsigned char*)s)[i];
			i++;
		}
		((unsigned char*)ret)[i] = ((unsigned char*)s)[i];
	}
	return (ret);
}
