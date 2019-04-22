/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:12:13 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/18 13:14:05 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_fillnbr(char *s, int n, int k, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		s[i + k] = '0' + (-1) * (n / ft_power(10, len - i - 1));
		n = n % ft_power(10, len - i - 1);
		i++;
	}
}

char			*ft_itoa(int n)
{
	size_t	len;
	int		k;
	char	*s;

	k = (n < 0);
	len = ft_get_decimals(n);
	s = (char*)malloc(len + 1 + (n < 0));
	if (!s)
		return (NULL);
	s[len + (n < 0)] = '\0';
	if (n < 0)
		s[0] = '-';
	if (n >= 0)
		n = -n;
	ft_fillnbr(s, n, k, len);
	return (s);
}
