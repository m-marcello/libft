/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nbrlen_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/20 15:15:53 by mmarcell       #+#    #+#                */
/*   Updated: 2019/07/04 15:09:35 by wmisiedj      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_nbrlen_unsigned(long long int nbr, int base)
{
	unsigned int nbrlen;

	nbrlen = 1;
	while ((nbr <= (-1) * base || base <= nbr))
	{
		nbr = nbr / base;
		++nbrlen;
	}
	return (nbrlen);
}
