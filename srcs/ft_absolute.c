/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_absolute.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: moana <moana@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 18:35:38 by moana         #+#    #+#                 */
/*   Updated: 2020/04/23 16:54:02 by moana         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_absolute(long long int nbr)
{
	if (nbr < 0)
		return (-1 * nbr);
	return (nbr);
}