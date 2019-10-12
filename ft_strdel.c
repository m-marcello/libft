/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:08:01 by mmarcell       #+#    #+#                */
/*   Updated: 2019/10/12 19:35:14 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdel(char **as)
{
	if (!as || !(*as))
		return ;
	free(*as);
	*as = NULL;
}
