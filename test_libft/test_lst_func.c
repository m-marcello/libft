/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lst_func.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/23 16:56:07 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/28 15:12:59 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	printlst(t_list *lst)
// {
// 	while (lst)
// 	{
// 		ft_putchar(*(((char*)(lst->content))));
// 		ft_putchar(' ');
// 		lst = lst->next;
// 	}
// 	ft_putchar('\n');
// }

static char	*ft_lsttostr(t_list *lst)
{
	char	*ret;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_lstcount(lst);
	ret = ft_strnew(len);
	while (i < len)
	{
		ret[i] = *(((char*)(lst->content)));
		lst = lst->next;
		i++;
	}
	return (ret);
}

static int	test_ft_lstfold(t_list **head)
{
	t_list	*lst;
	t_list	*start;
	t_list	*end;
	char	*str;

	lst = *head;
	while (lst)
	{
		if (*((char*)(lst->content)) == 'h')
			end = lst;
		lst = lst->next;
	}
	ft_lstfold(head, *head, end);
	lst = *head;
	while (lst)
	{
		if (*((char*)(lst->content)) == 'i')
			start = lst;
		if (*((char*)(lst->content)) == 'l')
			end = lst;
		lst = lst->next;
	}
	ft_lstfold(head, start, end);
	lst = *head;
	while (lst)
	{
		if (*((char*)(lst->content)) == 'm')
			start = lst;
		if (*((char*)(lst->content)) == 'o')
			end = lst;
		lst = lst->next;
	}
	ft_lstfold(head, start, end);
	lst = *head;
	while (lst)
	{
		if (*((char*)(lst->content)) == 'p')
			start = lst;
		if (*((char*)(lst->content)) == 'w')
			end = lst;
		lst = lst->next;
	}
	ft_lstfold(head, start, end);
	lst = *head;
	while (lst)
	{
		if (*((char*)(lst->content)) == 'x')
			start = lst;
		lst = lst->next;
	}
	ft_lstfold(head, start, NULL);
	str = ft_lsttostr(*head);
	if (ft_strequ(str, "hlow"))
	{
		free(str);
		return (1);
	}
	free(str);
	ft_putendl("ko :(");
	return (0);
}

static int	test_ft_lstadd_before(t_list **head)
{
	t_list	*new_nd;
	t_list	*node;
	char	*str;
	char	c;

	c = '!';
	new_nd = ft_lstnew(&c, sizeof(char));
	ft_lstadd_before(head, *head, new_nd);
	c = 'e';
	new_nd = ft_lstnew(&c, sizeof(char));
	node = *head;
	while (!(ft_strequ((char*)(node->content), "l")))
		node = node->next;
	ft_lstadd_before(head, node, new_nd);
	c = 'l';
	new_nd = ft_lstnew(&c, sizeof(char));
	while (!(ft_strequ(node->content, "o")))
		node = node->next;
	ft_lstadd_before(head, node, new_nd);
	c = 'o';
	new_nd = ft_lstnew(&c, sizeof(char));
	ft_lstadd_before(head, NULL, new_nd);
	str = ft_lsttostr(*head);
	if (ft_strequ(str, "!hellowo"))
	{
		free(str);
		return (1);
	}
	free(str);
	ft_putendl("ko :(");
	return (0);
}

static int	test_ft_lstadd_behind(t_list **head)
{
	t_list	*new_nd;
	t_list	*node;
	char	*str;
	char	c;

	c = '!';
	new_nd = ft_lstnew(&c, sizeof(char));
	ft_lstadd_behind(head, *head, new_nd);
	c = ' ';
	new_nd = ft_lstnew(&c, sizeof(char));
	node = *head;
	while (!(ft_strequ((char*)(node->content), "o")))
		node = node->next;
	ft_lstadd_behind(head, node, new_nd);
	node = node->next;
	c = 'r';
	new_nd = ft_lstnew(&c, sizeof(char));
	while (!(ft_strequ((char*)(node->content), "o")))
		node = node->next;
	ft_lstadd_behind(head, node, new_nd);
	c = 'l';
	new_nd = ft_lstnew(&c, sizeof(char));
	while (!(ft_strequ((char*)(node->content), "r")))
		node = node->next;
	ft_lstadd_behind(head, node, new_nd);
	c = 'd';
	new_nd = ft_lstnew(&c, sizeof(char));
	while (!(ft_strequ((char*)(node->content), "l")))
		node = node->next;
	ft_lstadd_behind(head, node, new_nd);
	str = ft_lsttostr(*head);
	if (ft_strequ(str, "!!hello world"))
	{
		free(str);
		return (1);
	}
	free(str);
	ft_putendl("ko :(");
	return (0);

}

int			main(void)
{
	size_t	i;
	t_list	*head;
	t_list	*tmp;

	head = ft_lstnew("a", sizeof(char));
	i = 'b';
	while (i <= 'z')
	{
		tmp = ft_lstnew(&i, sizeof(char));
		ft_lstadd_back(&head, tmp);
		i++;
	}
	ft_putstr("ft_lstfold:\t\t");
	if (test_ft_lstfold(&head))
		ft_putendl("ok");
	ft_putstr("ft_lstadd_before:\t");
	if (test_ft_lstadd_before(&head))
		ft_putendl("ok");
	ft_putstr("ft_lstadd_behind:\t");
	if (test_ft_lstadd_behind(&head))
		ft_putendl("ok");
	ft_lstdel(&head, &ft_delete);
	return (0);
}
