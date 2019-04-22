/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:04:07 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/18 13:14:05 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	unsigned int		result;
	int					sign;
	size_t				i;

	sign = 1;
	result = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\v' ||
		s[i] == '\f' || s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] && '0' <= s[i] && s[i] <= '9')
	{
		result = s[i] - '0' + result * 10;
		i++;
	}
	return (sign * result);
}
