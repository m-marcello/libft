/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:11:56 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/19 15:26:42 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

static char		**make_words(char **ret, char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	count;

	i = 0;
	start = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			ret[count] = (char*)malloc(i - start + 1);
			ret[count] = ft_strsub(s, start, i - start);
			count++;
		}
		if (s[i] != 0)
			i++;
	}
	return (ret);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**ret;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words((char*)s, c);
	ret = (char **)malloc(sizeof(char*) * words + 1);
	if (!ret)
		return (NULL);
	ret[words] = NULL;
	ret = make_words(ret, (char*)s, c);
	return (ret);
}
