/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strndup.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/14 13:46:40 by mmarcell      #+#    #+#                 */
/*   Updated: 2021/05/14 14:19:04 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <criterion/assert.h>
#include "libft.h"

Test(ft_strndup, n_smaller_than_len)
{
	const char	*s = "42, the answer to life, the universe and everything";
	size_t		n = 2;
	char		*expected = "42";

	char		*real_ret;
	real_ret = ft_strndup(s, n);
	cr_assert_str_eq(real_ret, expected, "return: \"%s\", does not match \
		expected return: \"%s\"", real_ret, expected);
	ft_strdel(&real_ret);
}

Test(ft_strndup, n_is_zero)
{
	const char	*s = "42, the answer to life, the universe and everything";
	size_t		n = 0;

	char		*real_ret;
	real_ret = ft_strndup(s, n);
	cr_assert_str_empty(real_ret, "n = 0: return is not empty");
	ft_strdel(&real_ret);
}

Test(ft_strndup, n_larger_than_len)
{
	const char	*s = "42, the answer to life, the universe and everything";
	size_t		n = 200;
	char		*expected = "42, the answer to life, the universe and everything";

	char		*real_ret;
	real_ret = ft_strndup(s, n);
	cr_assert_str_eq(real_ret, expected, "return: \"%s\", does not match \
		expected return: \"%s\"", real_ret, expected);
	ft_strdel(&real_ret);
}

Test(ft_strndup, s_null)
{
	const char	*s = NULL;
	size_t		n = 20;

	char		*real_ret;
	real_ret = ft_strndup(s, n);
	cr_assert_null(real_ret, "s = NULL: return is not NULL");
}
