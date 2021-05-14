/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strndup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:00:16 by mmarcell      #+#    #+#                 */
/*   Updated: 2021/05/14 14:08:46 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*ret;
	size_t	i;
	size_t	len;

	if (s == NULL)
		return (NULL);
	ret = ft_strnew(n);
	len = ft_strlen(s);
	if (ret != NULL)
	{
		i = 0;
		while (i < n && i < len)
		{
			((unsigned char*)ret)[i] = ((unsigned char*)s)[i];
			i++;
		}
	}
	return (ret);
}
