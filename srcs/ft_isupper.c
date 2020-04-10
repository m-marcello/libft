/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 17:19:37 by mmarcell       #+#    #+#                */
/*   Updated: 2019/01/25 20:28:57 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}