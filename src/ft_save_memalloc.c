/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_save_memalloc.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:07:07 by mmarcell      #+#    #+#                 */
/*   Updated: 2021/05/14 13:02:31 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_save_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
	{
		ft_bzero(ptr, size);
		return (ptr);
	}
	perror(NULL);
	exit(-1);
}
