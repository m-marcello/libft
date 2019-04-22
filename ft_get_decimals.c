/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_decimals.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 18:59:18 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/18 13:24:22 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_get_decimals(int n)
{
	size_t	dec;

	dec = 1;
	while (n < -9 || 9 < n)
	{
		n = n / 10;
		dec++;
	}
	return (dec);
}
