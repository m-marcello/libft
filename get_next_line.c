/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/08 10:48:22 by mmarcell       #+#    #+#                */
/*   Updated: 2020/02/15 14:54:34 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** -------------------------------------------------------------------------- **
** moves everything after \n in saved string to beginning of saved string or
** frees saved string in case no \n is found
** params
**	char **saved	saved string
** return
**	1	in case there was / is something saved
**	0	in case saved was empty
*/

static int	save_rest_or_free_saved(char **saved)
{
	size_t	i;
	size_t	len;
	char	*rest;

	if (!(*saved)[0])
	{
		ft_strdel(saved);
		return (0);
	}
	len = ft_strlen(*saved);
	i = 0;
	while ((*saved)[i] && (*saved)[i] != '\n')
		i++;
	if (len == 0 || i >= len - 1)
	{
		ft_strdel(saved);
		return (1);
	}
	rest = &((*saved)[i + 1]);
	ft_memmove(*saved, rest, (len - i - 1));
	ft_bzero(&((*saved)[len - i - 1]), (i + 1));
	return (1);
}

/*
** -------------------------------------------------------------------------- **
** returns a fresh string with everything until \n or 0
** params
**	char *saved		saved string
** return
**	fresh pointer to string containing saved until \n or 0
*/

static char	*create_line(char *saved)
{
	int		i;

	i = 0;
	while (saved[i] && saved[i] != '\n')
		i++;
	return (ft_strsub(saved, 0, i));
}

/*
** -------------------------------------------------------------------------- **
** reads next line from fd
** params
**	const int fd	fd to read from
**	char **line		addres where to save next line
** return
**	1	when line has been read
**	0	when nothing has been read
**	-1	in case of error
**
** - read -> buf -> fresh version of saved until \n is found or there is nothing
** 		to read left
** - saves the complete line (including \n and what is in buf after that) in
** 		string-array at index fd
** - calls static create_line() to get fresh string without \n
** - calls static save_rest_or_free_saved() to save what's after \n for next
** 		function call or to free the saved string in case there was no \n
*/

int			get_next_line(const int fd, char **line)
{
	static char	*saved[FD_MAX];
	char		buf[BUFF_SIZE + 1];
	int			read_bytes;
	char		*tmp;

	if (fd < 0 || FD_MAX < fd || BUFF_SIZE < 1 || (read(fd, buf, 0) < 0))
		return (-1);
	if (!(saved[fd]))
		saved[fd] = ft_strnew(0);
	if (!(saved[fd]))
		return (-1);
	read_bytes = 1;
	while (read_bytes && ft_strchr(saved[fd], '\n') == NULL)
	{
		ft_bzero(buf, BUFF_SIZE + 1);
		read_bytes = read(fd, buf, BUFF_SIZE);
		tmp = saved[fd];
		saved[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
		if (!saved[fd] || read_bytes == 0)
			return (0);
	}
	if (saved[fd][0])
		*line = create_line(saved[fd]);
	return (save_rest_or_free_saved(&saved[fd]));
}
