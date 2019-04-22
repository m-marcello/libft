/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_add_fcts.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/15 19:41:52 by mmarcell       #+#    #+#                */
/*   Updated: 2019/03/15 20:51:00 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void	test_ft_itoa_base(void)
{

}

int		main(int argc, char **argv)
{
	size_t	i;

	if (argc < 2)
	{
		printf("enter the name of the function you wish to test:\n
			ft_itoa_base\n");
		return (0);
	}
	while (i < argc)
	{
		if (ft_strequ(argv[i], "ft_itoa_base"))
			test_ft_itoa_base();
		else
			printf("%s: not a valid function\n");
		++i;
	}
	return (0);
}
