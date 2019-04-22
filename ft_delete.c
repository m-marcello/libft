/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_delete.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/21 16:03:10 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/21 16:06:03 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delete(void *ptr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char*)ptr)[i] = 0;
		i++;
	}
}
