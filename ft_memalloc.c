/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:07:07 by mmarcell       #+#    #+#                */
/*   Updated: 2019/10/12 19:33:18 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(sizeof(char) * size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
