/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_power.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 14:27:24 by mmarcell       #+#    #+#                */
/*   Updated: 2019/01/25 14:53:19 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int base, unsigned int exp)
{
	int		result;

	result = 1;
	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		result = result * base;
		exp--;
	}
	return (result);
}
